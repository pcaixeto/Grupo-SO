//Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++

#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome1[10] = "pedro";
    char nome2[10] = "eduardo";
    
    int retorno;
        
    retorno = strcoll(nome2, nome1);
    if (retorno > 0) {
        printf("Em ordem alfabetica temos \n %s \n %s \n\n", nome1,nome2);
    } else if (retorno < 0) {
        printf("Em ordem alfabética temos \n %s \n %s \n\n", nome2,nome1);
    } else {
        printf("As palavras são iguais \n %s \n %s \n", nome1, nome2);
    }
    
}
