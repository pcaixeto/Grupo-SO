/*

Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

*/


#include <stdio.h>

int main(void) {
    int odd_number = 0;
    printf("Digite um número impar: ");
    scanf("%d", &odd_number);
    int i = 1;
    int j = odd_number;
    
    while(i != j)
    {
        for(int l = i; l <= j; l++)
            printf("%d \t", l);
        
        printf("\n");
        i++;
        j--;
    }
    printf("%d", i);

    
    return 0;
}
