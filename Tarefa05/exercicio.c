#include <stdio.h>
#include <stdlib.h>

struct reg {
    int conteudo; 
    struct reg *prox; 
}; 

typedef struct reg celula;

celula* remover(celula* head, int remover) {
    celula* headaux = head;
    celula* anterior = NULL;

    while (head != NULL) {
        if (head->conteudo == remover) {
            if (anterior == NULL) {
                headaux = head->prox;
            } else {
                anterior->prox = head->prox;
                
            }
            return headaux;
        }
        anterior = head;
        head = head->prox;
    }
    free(head);
    return headaux;
}

void imprime_lista_encadeada(celula* tail)
{
    celula* celula_aux;
    for(celula_aux = tail; celula_aux != NULL; celula_aux = celula_aux->prox)
    {
        printf("%d \t", celula_aux->conteudo);
    }
}


int main(void) {
    //exe1: instanciando as celulas
    celula celula1;
    celula1.conteudo = 1;

    celula celula2;
    celula2.conteudo = 2;

    celula celula3;
    celula3.conteudo = 3;
    celula3.prox = NULL; // pro print nao entrar em loop
    //--------------------------------
    //exe2: ligando as celulas e printando conteudo
    celula1.prox = &celula2;
    celula2.prox = &celula3;

    imprime_lista_encadeada(&celula1);
    printf("\n");
    //--------------------------------

    //exe3: mostrando o tamanho de cada celula
    int tamanho_celula1 = sizeof(celula1);
    printf("Tamanho da celula1: %d \n", tamanho_celula1);

     int tamanho_celula2 = sizeof(celula2);
    printf("Tamanho da celula2: %d \n", tamanho_celula2);

     int tamanho_celula3 = sizeof(celula3);
    printf("Tamanho da celula3: %d \n", tamanho_celula3);
    //--------------------------------

    //exe4 e ex5:
        // vamos remover a celula 3
    celula1 = *remover(&celula1,3);
    
    imprime_lista_encadeada(&celula1);
    return 0;
    //--------------------------------
}
