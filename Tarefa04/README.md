# Grupo-SO
## Membros

* NOME : Pedro Machado Gomes Caixeta TIA  : 42105811

* NOME : Paloma Bezerra TIA  : 32094264

* NOME : Arthur Ferreira TIA  : 42000858

Entregue a solução realizada em sala para o problema do cálculo de pi. Para a solução implementada apresente os logs de execução contendo:

* Quantidade de threads;

* Valor de pi calculado pelo algoritmo.

a) No final, entregue no README do repositório uma explicação resumida sobre as diferenças entre os valores atingidos. Quais foram as causas das divergências? Por que elas aconteceram?

b) Implemente uma solução utilizando Mutex e comparece com a anterior. O que mudou? Por quê?

### Exercício 1
Sem utilizar um mutex, mais de uma thread pode acessar a variável global **soma** ao mesmo tempo. Isso pode causar uma condição de corrida, ou seja, o resultado da operação feita em soma vai depender de que thread acessou a variável em um determinado momento, o que pode causar um erro no cáculo final.
Por isso, diferentes execuções do exercício 1 podem resultar em valores de Pi um pouco distintos.

Exemplo:

![image](https://user-images.githubusercontent.com/60948786/233131459-cb6fe3d8-4fb4-49b4-a634-fcb4440549b0.png)


### Exercício 2
Utilizando um mutex para proteger a seção do código onde é realizada a operação na variável global **soma**, é garantido que apenas uma thread terá acesso a ela por vez:

![image](https://user-images.githubusercontent.com/60948786/233132291-4209e40c-463e-45c0-bc4f-107fe04be7ac.png)
 
Assim, não ocorrem condições de corrida e o resultado não é alterado:

![image](https://user-images.githubusercontent.com/60948786/233132537-654c4107-8b49-4da1-88f9-fbdd15bc5381.png)

## Como compilar os arquivos em C
** Certifique-se se você tem o GCC instalado na máquina **
1. Faça o download do arquivo a ser rodado (EXEMPLO: `ex1.c`)
2. Abra o terminal ou command prompt e navegue até o diretório onde seu arquivo .c foi armazenado
3. Digite o comando `gcc nome-do-arquivo.c -o nome-do-arquivo-executavel` (EXEMPLO: `gcc ex1.c -o ex1`)

## Como executar o programa;

Após rodar o comando de compilação, execute o arquivo executável gerado pelo comando acima digitando o comando `./nome-do-arquivo-executavel` (EXEMPLO: `./ex1`)


