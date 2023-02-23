#include <stdio.h>

void mostraMatriz(int matriz[3][3]) 
{
  //funcao usada para mostrar varias vezes a matriz
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }
}

void substituiNegativo(int matriz[3][3])
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (matriz[i][j] < 0) 
            {
                matriz[i][j] = -matriz[i][j];
            }
        }
    }
}

int main(void) {
    
    int matriz[3][3] = {{1, 2, -3}, {1, -2, 3}, {-1, 2, 3}};
    printf("Matriz atual: \n");
    mostraMatriz(matriz);
    
    substituiNegativo(matriz);   
    printf("Matriz com os negativos modularizados: \n");
    mostraMatriz(matriz);
    
    return 0;
}