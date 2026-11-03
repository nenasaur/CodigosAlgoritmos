#include<stdio.h>

/*Escreva um código que receba dois números inteiros na
mesma linha e exiba o resultado das quatro operações básicas                                       */
 
int main()
{
 int firstNum, SecondNum;

 printf("digite os dois numeros para realizar as operacoes basicas: ");
 scanf("%d %d", &firstNum, &SecondNum);
 printf(" ----resultados:----\n soma:%d\n subtracao:%d\n multiplicacao:%d\n divisao:%d\n", firstNum+SecondNum, firstNum-SecondNum, firstNum*SecondNum, firstNum/SecondNum);

 return 0;

}