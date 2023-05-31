# Grupo-SO
## Membros

* NOME : Pedro Machado Gomes Caixeta TIA  : 42105811

* NOME : Paloma Bezerra TIA  : 32094264

* NOME : Arthur Ferreira TIA  : 42000858

### Transferências

## Funcionamento
O objetivo do programa é simular transferencias bancárias entre 2 contas, a conta "to" e a conta "from", e cada transferências bancária é representada por uma thread. Existem duas funções de transferência: transferenciaC1 e transferenciaC2. A função transferenciaC1 transfere um valor da conta 1 para a conta 2, enquanto a função transferenciaC2 transfere um valor da conta 2 para a conta 1.

As contas bancárias são representadas pela struct "conta", que possui como atributo "saldo". O valor a ser transferido entre as contas é definido pela variável "valor".

O programa usa semáforos (mutexF e mutexT) para garantir a exclusão mútua ao acessar as contas. Isso evita condições de corrida e garante que apenas uma thread possa acessar as contas por vez.

Após a execução das threads, o programa exibirá os saldos finais das contas e liberará a memória alocada


## Como compilar os arquivos em C
** Certifique-se se você tem o GCC instalado na máquina **
1. Faça o download do arquivo a ser rodado (EXEMPLO: `trabalho.c`)
2. Abra o terminal ou command prompt e navegue até o diretório onde seu arquivo .c foi armazenado
3. Digite o comando `gcc nome-do-arquivo.c -o nome-do-arquivo-executavel` (EXEMPLO: `gcc trabalho.c -o trabalho`)

## Como executar o programa;

Após rodar o comando de compilação, execute o arquivo executável gerado pelo comando acima digitando o comando `./nome-do-arquivo-executavel` (EXEMPLO: `./trabalho`)
