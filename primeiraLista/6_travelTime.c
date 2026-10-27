#include<stdio.h>

int main()
{
    
float distance, Carvelocity, time;
printf("distance of travel (km):  ");
scanf("%f", &distance);
printf("your velocity (km/h)");
scanf("%f", &Carvelocity);
time = distance/Carvelocity;
printf("the time of travel is: %.2f h", time);
return 0;

}