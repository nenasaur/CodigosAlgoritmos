/*13. O valor de uma corrida em um aplicativo de transporte é composto por uma taxa fixa inicial
(chamada de taxa de embarque) de R$ 4,00, mais R$ 1,50 por quilômetro rodado e R$ 0,25 por
minuto de viagem. Escreva um programa que pergunte a distância da viagem (em km) e a
duração (em minutos), calculando e exibindo o valor total que o passageiro deverá pagar.*/


#include <stdio.h>

int main()
{
 float distance_of_travel, timeTravel, tota_cost, timeCost, distanceCost;
 
 printf("distance of your travel: ");
 scanf("%f", &distance_of_travel);
 distanceCost = 1.5*distance_of_travel;
 
 printf("travel duration: ");
 scanf("%f", &timeTravel);
 timeCost = timeTravel/4;

 tota_cost = 4 +distanceCost +timeCost;

 printf("total : R$:%.2f", tota_cost);



}