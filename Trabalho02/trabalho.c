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
sem_t mutexF;
sem_t mutexT;

void *transferenciaC1(void* thread){
	sem_wait(&mutexF);
	if(from.saldo > 0 && to.saldo>0){
		from.saldo -= valor;
		to.saldo += valor;
		printf("\ntransferindo da conta 1 para conta 2");
		printf("\nsaldo de c1: %d", from.saldo);
		printf("\nsaldo de c2: %d", to.saldo);
	}
	sem_post(&mutexF);

	return NULL;
}

void *transferenciaC2(void* thread) {
	sem_wait(&mutexT);
	if(to.saldo > 0 && from.saldo>0){
                to.saldo -= valor;
                from.saldo += valor;
                printf("\ntransferindo da conta 2 para conta 1");
                printf("\nsaldo de c1: %d", from.saldo);
                printf("\nsaldo de c2: %d", to.saldo);
        }
	sem_post(&mutexT);

        return NULL;

}

int main() {
    	int threadCount = 100;
    	void * stack;
    	intptr_t i;

	pthread_t threadIds[threadCount];

	sem_init(&mutexF, 0, 1);
	sem_init(&mutexT, 0, 1);

	stack = malloc( FIBER_STACK );
  	if ( stack == 0 )
	{
	       	perror("malloc: could not allocate stack");
	       	exit(1);
       	}
   
   
    	from.saldo = 100000;
    	to.saldo = 100000;

    	valor = 10;
    	
    	for (i = 0; i < threadCount; i++) {
		if(i%3==0)
        		pthread_create( &threadIds[i], NULL, transferenciaC2, (void*) i);
		else
			pthread_create( &threadIds[i], NULL, transferenciaC1, (void*) i);
    	}

    	for (i = 0; i < threadCount; i++) {
        	pthread_join(threadIds[i], NULL);
    	}

   	 free(stack);
   	 printf("\nTransferências concluídas e memória liberada.\n");
   	 return 0;
}
