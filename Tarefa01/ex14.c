#include <stdio.h>

int main(void) {
  char Str[100];
  for(int i=0;i<100;i++){
    Str[i] = ' ';
  }
  printf("\n\no caractere A será inserido na posição 63 da String\n");
  Str[63] = 'A';
  printf("\nString:\n");
  for(int i=0;i<100;i++){
    printf("%c , ",Str[i]);
  }
}