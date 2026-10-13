#include <stdio.h>

int CheckValue(int input); 

int main()
{
    int Sensor_value;

   printf("Sensor Value:");
   scanf("%d", &Sensor_value);
   CheckValue(Sensor_value);
return 0;
}

int CheckValue(int input){
    printf("Checked Value: %d\n", input);
    return 0;
}