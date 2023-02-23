/*

6. Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int **aloca_e_preenche_matriz(int linhas, int colunas) {
    int **matriz;
    
    //alocando memoria
    matriz = (int **) calloc(linhas, sizeof(int *));
    for (int i = 0; i < 10; i++) {
        matriz[i] = (int *) calloc(colunas, sizeof(int));
    }
    srand(time(NULL));
    
    //preenchendo
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Digite o elemento da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return matriz;
}

void mostra_matriz(int **matriz, int linhas, int colunas) {
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
    
    printf("----\n");
}

void matriz_transposta(int **matriz, int linhas, int colunas) {
    for(int i = 1; i < linhas; i++){
        for(int j = 0; j < i; j++){
            int aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }
}

int main(void) {
    int **matriz;
    int tamanho;
    printf("Digite o tamanho da matriz: "); //sera considerada uma matriz quadrada
    scanf("%d", &tamanho);
    matriz = aloca_e_preenche_matriz(tamanho, tamanho);
    
    
    printf("Matriz Gerada: \n");
    mostra_matriz(matriz, tamanho, tamanho);
    
    printf("Matriz Gerada Transposta: \n");
    matriz_transposta(matriz, tamanho, tamanho);
    mostra_matriz(matriz, tamanho, tamanho);
    
    free(matriz);
    
    return 0;
}

//gcc -o teste main.c
//ou gcc main.c -o teste
