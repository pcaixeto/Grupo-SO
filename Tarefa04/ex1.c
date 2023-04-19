#include <stdio.h>
#include <pthread.h>

long long thread_count;
long long n = 1000;
double soma;

void *somaPi(void *Thread){
	long mThread = (long)Thread;
  	double factor;
  	long long i;
  	long long my_n = n / thread_count;
  	long long start_i = my_n*mThread;
  	long long end_i = start_i+my_n;

	if(start_i % 2 ==0)
		factor = 1.0;
	else
		factor = -1.0;

	for(i = start_i; i<end_i; i++, factor = -factor){
		soma += factor/(2.0*i+1.0);
		//printf("\nthread numero %ld calculando soma: %lf",(long)Thread, soma);
	}

	return NULL;
}

int main(void) {
	soma = 0;
	thread_count = 5;
  	pthread_t threadid[thread_count];

	printf("numero de threads: %lld\n", thread_count);
	
	for(long i=0;i<thread_count;i++){
		pthread_create(&threadid[i], NULL, somaPi, (void*) i);
	}

	for(long long i=0;i<thread_count;i++){
		pthread_join(threadid[i],NULL);
	}

	soma = 4*soma;
	printf("\n\npi: %lf \n", soma);
	
  return 0;
}
