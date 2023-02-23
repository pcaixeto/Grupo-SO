#include <stdio.h>

void printMatrix(int m[4][4]){
  for(int i=0;i<4;i++){
    printf("\n");
    printf("|");
    for(int j=0; j<4;j++){
      printf("%d|",m[i][j]);
    }
  }
}

int main(void) {
  int matriz[4][4] = {6,4,8,3,5,6,3,1,2,4,8,6,2,5,4,2};
  printf("\nMatriz:\n");
  printMatrix(matriz);
  printf("\n\nmultiplicando os elementos da linha 1 pela linha 2:");
  for(int i=0;i<4;i++){
    matriz[1][i]*=matriz[0][i];
  }
  printMatrix(matriz);

  printf("\n\nagora somando o os elementos da linha 1 com a linha 2:");

  for(int i=0;i<4;i++){
    matriz[1][i]+=matriz[0][i];
  }
  printMatrix(matriz);
}
