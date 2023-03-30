# Grupo-SO
## Membros

* NOME : Pedro Machado Gomes Caixeta TIA  : 42105811

* NOME : Paloma Bezerra TIA  : 32094264

* NOME : Arthur Ferreira TIA  : 42000858

## Como comprovar que os resultados propostos foram alcançados.

### Jantar dos Filosofos

Em nossa solução, cada filósofo é representado por uma thread, que roda independente das outras, e a comunicação entre eles é gerenciada por semáforos: um árbitro, que funciona como um mutex, decidindo se um filósofo pode ou não comer em dado momento, e um semáforo para cada filósofo, que auxilia a comunicação sinalizando sempre que um filósofo parar ou começar a comer.


## Como compilar os arquivos em C
** Certifique-se se você tem o GCC instalado na máquina **
1. Faça o download do arquivo a ser rodado (EXEMPLO: `JantarDosFilosofos.c`)
2. Abra o terminal ou command prompt e navegue até o diretório onde seu arquivo .c foi armazenado
3. Digite o comando `gcc nome-do-arquivo.c -o nome-do-arquivo-executavel` (EXEMPLO: `gcc JantarDosFilosofos.c -o JantarDosFilosofos`)

## Como executar o programa;

Após rodar o comando de compilação, execute o arquivo executável gerado pelo comando acima digitando o comando `./nome-do-arquivo-executavel` (EXEMPLO: `./JantarDosFilosofos`)
