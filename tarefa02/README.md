# Grupo-SO
## Membros

* NOME : Pedro Machado Gomes Caixeta TIA  : 42105811

* NOME : Paloma Bezerra TIA  : 32094264

* NOME : Arthur Ferreira TIA  : 42000858

### Exercício 1

Identifique no seu programa as linhas de comando onde ocorrem chamadas de sistemas ao SO.
Quantas chamadas de sistemas foram realizadas?

As chamadas de sistemas estão nas linhas:
 - linha 7: printf() - write()
 - linha 8: scanf() - read()
 - linha 10: fopen() - open()
 - linha 14: printf() - write()
 - linha 18: printf() - write()
 - linha 21: fgetc() - read()
 - linha 22: printf() - write()
 - linha 25: fclose() - close()
 
 Foram realizadas 8 chamadas de sistema.

### Exercício 2

Identifique no seu programa as linhas de comando onde ocorrem chamadas de sistemas ao SO.
Quantas chamadas de sistemas foram realizadas?

As chamadas de sistemas estão nas linhas:
 - linha 7: printf() - write()
 - linha 8: scanf() - read()
 - linha 10: fopen() - open()
 - linha 12: printf() - write()
 - linha 15: printf() - write()
 - linha 17: printf() - write()
 - linha 18: scanf() - read()
 - linha 20: fopen() - open()
 - linha 22: printf() - write()
 - linha 24: printf() - write()
 - linha 28: fgetc() - read()
 - linha 30: fputc() - write()
 - linha 31: fgetc() - read()
 - linha 34: fclose() - close()
 - linha 35: fclose() - close()
  
 Foram realizadas 15 chamadas de sistema.

## Como compilar os arquivos em C
** Certifique-se se você tem o GCC instalado na máquina **
1. Faça o download do arquivo a ser rodado (EXEMPLO: `exercicio3.c`)
2. Abra o terminal ou command prompt e navegue até o diretório onde seu arquivo .c foi armazenado
3. Digite o comando `gcc nome-do-arquivo.c -o nome-do-arquivo-executavel` (EXEMPLO: `gcc exercicio3.c -o exercicio3`)

## Como executar o programa;

Após rodar o comando de compilação, execute o arquivo executável gerado pelo comando acima digitando o comando `./nome-do-arquivo-executavel` (EXEMPLO: `./exercicio3`)

## Como comprovar que os resultados propostos foram alcançados.

### Laboratório 3

1) O comando cat é usado no sistema operacional Linux para exibir o conteúdo de um arquivo na tela do computador. Escreva um programa (na linguagem C) faça exatamente o que o cat faz, o programa deverá ler um arquivo texto (entrada) informado por linha de comando no interpretador de comando (Como se faz isso ?) e depois imprimir o conteúdo do arquivo na tela. Faça todos os testes necessários para abertura, leitura e ao final não se esqueça de fechar o arquivo.
![image](https://user-images.githubusercontent.com/60986916/223551414-629ab7f4-4869-44ec-ac21-56752b497def.png)


2) Escreva um programa (na linguagem C) que leia um arquivo texto (entrada) e copie para um outro arquivo (saída), ou seja, faz o que o comando cp faz no Linux. O seu programa deve solicitar o nome do arquivo de entrada e de saída (por linha de comando), uma vez obtido os dois nomes, o programa deve abrir o arquivo de entrada e criar o arquivo de saída. Caso por alguma razão não possa abrir o arquivo de entrada seu programa deve imprimir uma mensagem de aviso e finalizar, caso aconteça um erro de criação do arquivo saída o programa imprime uma mensagem e finaliza. Caso o programa tenha sucesso na abertura e criação, o programa lê a partir do arquivo de entrada e grava no arquivo de saída. Finalmente, depois que o arquivo de entrada for inteiramente copiado o programa pode fechar os dois arquivos.
![image](https://user-images.githubusercontent.com/60986916/223558713-bc99eb77-f618-4a21-b3d7-3406885e1643.png)


