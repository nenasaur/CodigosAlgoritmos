#include <stdio.h>


int main()
{
    int rpm;
    float temperature;
   printf("digite valor para RPM e a temperatura:");
   scanf("%d %f", &rpm, &temperature);
   printf("| rpm: %d | Temp: %.2fC |\n",rpm, temperature);
 
    return 0;
}