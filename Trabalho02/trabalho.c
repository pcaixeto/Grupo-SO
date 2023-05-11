#define _GNU_SOURCE
#include <stdlib.h>
#include <malloc.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sched.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

// 64kB stack
#define FIBER_STACK 1024 * 64
struct c {
    int saldo;
};

typedef struct c conta;

conta from, to;
int valor;
conta * p, * q;
int i = 0;
int cont = 0;
sem_t mutex;


void *transferencia(void* thread) {

    while (to.saldo > 0 && from.saldo > 0 /*&& cont <100*/) {
		i++;
		sem_wait(&mutex);
        if (i % 5 == 0) {
            if (from.saldo >= valor && from.saldo > 0) { 
				cont++;// 2
                from.saldo -= valor;
                to.saldo += valor;
                printf("Transferência concluída com sucesso!\n");
                printf("Saldo de c1: %d\n", from.saldo);
                printf("Saldo de c2: %d\n", to.saldo);
            }
        } else {
            if (to.saldo >= valor && to.saldo > 0) {
				cont++;
                to.saldo -= valor;
                from.saldo += valor;
                printf("Transferência concluída com sucesso!\n");
                printf("Saldo de c1: %d\n", from.saldo);
                printf("Saldo de c2: %d\n", to.saldo);
            }
        }
		sem_post(&mutex);
    }

	return NULL;

}

int main() {
    int threadCount = 100;
    void * stack;
    pid_t pid;
    intptr_t i;

    pthread_t threadIds[threadCount];

	sem_init(&mutex, 0, 1);
   
    stack = malloc(FIBER_STACK);
    if (stack == 0) {
        perror("malloc: could not allocate stack");
        exit(1);
    }
    from.saldo = 10000;
    to.saldo = 10000;

    valor = 10;
    printf("Transferindo %d para a conta c2\n", valor);;
    for (i = 0; i < threadCount; i++) {
        pthread_create( &threadIds[i], NULL, transferencia, (void*) i);
    }

    for (i = 0; i < threadCount; i++) {
        pthread_join(threadIds[i], NULL);
    }

    free(stack);
    printf("Transferências concluídas e memória liberada.\n");
    return 0;
}
