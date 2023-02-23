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
  int n = 2;
  printf("Matriz:\n")
  printMatrix(matriz);
  printf("\n\nmultiplicando a linha 0 por %d:\n",n);
  for(int i=0; i<4;i++){
    matriz[0][i]*=n;
  }
  printMatrix(matriz);
  printf("\n\nmultiplicando a coluna 0 por %d:\n",n);
  for(int i=0; i<4;i++){
    matriz[i][0]*=n;
  }
  printMatrix(matriz);
}
