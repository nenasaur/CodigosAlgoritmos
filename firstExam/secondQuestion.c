#include <stdio.h>
/*
Escreva um código que leia o tempo de uma viagem(em horas) e a velocidade média esperada (em km/h),
 calculando e exibindoa distãncia percorrida em km. obs.: vlc = s/t                                                   */

int main(){
    float time, distance, velocity;
    printf("say the duration of travel(in hour): ");
    scanf("%f", &time);
    printf("the distance of your travel (km):");
    scanf("%f", &distance);
    velocity = distance/time;
    printf(" your average velocity is: %.2f km/h.", velocity);

    return 0;
}
