/*

12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.

*/

#include <stdio.h>

unsigned int buscaCaracter(char palavra[13], char caracterProcurado)
{
    int tamanhoPalavra = 14; //hardcoded
    for (int i = 0; i < tamanhoPalavra; i++)
        if (palavra[i] == caracterProcurado)
            return i;
    
    return 0;
}

int main() 
{
    char caracterProcurado = 'o';
    char palavra[15] = "paralelepipedo";

    unsigned int posicaoCharProcurado = buscaCaracter(palavra, caracterProcurado);

    if(posicaoCharProcurado == 0)
        printf("Esse caracter nao esta nessa palavra");
    
    else
        printf("O caracter %c esta na posicao %d", caracterProcurado, posicaoCharProcurado+1);
        
}
