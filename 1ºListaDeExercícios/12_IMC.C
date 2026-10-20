/*

12. O Índice de Massa Corporal (IMC) é uma fórmula utilizada para verificar se um adulto está no
seu peso ideal. Faça um programa que peça o peso (em kg) e a altura (em metros) do usuário.
Calcule e imprima o IMC dele na tela.
*/

#include <stdio.h>

int main()
{
    float altura, massa, imc;
    
printf("--- calculadora de IMC ---");
printf("\n por favor, digite sua massa e sua altura em kg e m, respectivamente.");
scanf(" %f %f", &massa, &altura);

imc = massa/(altura*altura);
printf("Seu IMC é: %.2f", imc);
}