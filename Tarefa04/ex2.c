#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

long long thread_count;
long long n = 1000;
double soma;

sem_t mutex;

void *somaPi(void *arg) {
    long thread_num = (long) arg;
    double factor;
    long long i;
    long long my_n = n / thread_count;
    long long start_i = my_n * thread_num;
    long long end_i = start_i + my_n;

    if (start_i % 2 == 0)
        factor = 1.0;
    else
        factor = -1.0;

    for (i = start_i; i < end_i; i++, factor = -factor) {
        sem_wait(&mutex);
        soma += factor / (2.0 * i + 1.0);
        printf("\nthread numero %ld calculando soma: %lf", thread_num + 1, soma);
        sem_post(&mutex);
    }

    return NULL;
}

int main(void) {
    soma = 0;
    thread_count = 5;
    pthread_t threadid[thread_count];

    sem_init(&mutex, 0, 1);
    printf("\nsemaforo inicializado\n");

    printf("numero de threads: %lld\n", thread_count);

    for (long i = 0; i < thread_count; i++) {
        pthread_create(&threadid[i], NULL, somaPi, (void *) i);
    }

    for (long i = 0; i < thread_count; i++) {
        pthread_join(threadid[i], NULL);
    }

    soma = 4 * soma;
    printf("\n\npi: %lf", soma);

    return 0;
}

