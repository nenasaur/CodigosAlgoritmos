#include <stdio.h>
int main()
{
    int number, SquaredNumber;
    printf("Pick a number to be squared:  ");
    scanf("%d", &number);
    SquaredNumber = number*number;
    printf("The square of %d is %d !", number, SquaredNumber);

    return 0;
}