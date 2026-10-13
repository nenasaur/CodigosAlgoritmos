#include <stdio.h>

int main()
{
int idade;
char nome[4];
printf("nome :");
//scanf("%s", nome);    
fgets(nome, sizeof nome, stdin);
// variavel, tamanho variavel, de onde vai vir o valor.
printf("digite a idade: ");
scanf("%d", &idade);
printf("info: %s # %d anos", nome, idade);
return 0;
}