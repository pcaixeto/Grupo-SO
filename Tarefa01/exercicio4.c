//Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++

#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra1[10] = "pedro";
    char palavra2[10] = "eduardo";
    
    int retorno;
        
    retorno = strcoll(palavra2, palavra1);
    if (retorno > 0) {
        printf("Em ordem alfabetica temos \n %s \n %s \n\n", palavra1,palavra2);
    } else if (retorno < 0) {
        printf("Em ordem alfabética temos \n %s \n %s \n\n", palavra2,palavra1);
    } else {
        printf("As palavras são iguais \n %s \n %s \n", palavra1, palavra2);
    }
    
}