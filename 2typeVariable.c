#include <stdio.h>


int main()
{
    int Sensor_value;
    char sensor_state;// 'L' or 'H'
   printf("Sensor Value:");
   scanf("%d", &Sensor_value);
   printf("Sensor state: high or Low");
   scanf(" %c", &sensor_state);
   printf("| Sensor Value: %d | State:(%c)\n", Sensor_value, sensor_state);

    return 0;
   }