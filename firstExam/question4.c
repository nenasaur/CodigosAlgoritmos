
#include<stdio.h>
/*

O Índice de massa corporal(imc) é calculado dividindo o peso(em kg)
pela altura elevada ao quadrado (altura multiplicada por ela mesma).
escreva um programa que :

1.Peça o peso do usuário;
2.Altura do usuário;
3.Calcule o IMC
4.Exiba o valor IMC a tela;                                                                  */

int main()
{


float peso,altura, imc;

printf("digite sua altura: ");
scanf("%f", &altura);
printf("digite seu peso: ");
scanf("%f", &peso);

imc = peso/(altura*altura);
printf("seu IMC eh : %.2f", imc);

 return 0;
}