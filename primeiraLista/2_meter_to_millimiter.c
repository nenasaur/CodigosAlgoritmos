#include <stdio.h>

int main()
{
    float dimension_meter, dimension_millimiter;
    printf("--- meter to millimiter conversor ---\n");
    printf("\n");
    printf("write the dimension in meters: ");
    scanf("%f", &dimension_meter);
    dimension_millimiter = dimension_meter*1000;
    printf("the dimension in millimiter is %.3f mm", dimension_millimiter);
}

