#include <stdio.h>

int main(void) {
float n1 = 4.2, n2 =8.8, n3=7.5, me=6;
  printf("nota 1: %f", n1);
  printf("nota 2: %f", n2);
  printf("nota 3: %f", n3);

  printf("\n\nmedia das notas dos exercicios realizados: %f\n", me);
    
  float ma = (n1+n2*2+n3*3+me)/7;

  if(ma>=9)
    printf("nota A");
  else if(ma>=7.5&&ma<9)
    printf("nota B");
  else if(ma>=6&&ma<7.5)
    printf("nota C");
  else if(ma>=4&&ma<6)
    printf("nota D");
  else if(ma<4)
    printf("nota E");
}
