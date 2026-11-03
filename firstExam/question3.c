#include <stdio.h>

/* 
Escreva um código que pergunte o nome de uma pessoa e depois o seu 
sobrenome (em linhas separadas). Ao final escreva no padrão Sobrenome, Nome        */

int main()
{
char nome[20], sobrenome[30];
printf("qual eh o seu nome ?");
fgets(nome, sizeof nome, stdin);
printf("qual eh o seu sobrenome ?");
fgets(sobrenome, sizeof sobrenome, stdin);
printf("%s, %s", sobrenome, nome);

return 0;
}