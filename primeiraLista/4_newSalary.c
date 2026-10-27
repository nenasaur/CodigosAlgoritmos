#include <stdio.h>

int main()
{
 float salary, bonus;
 printf("say your salary:");
 scanf(" %f", &salary);
 printf("say your salary increase (in percent): ");
 scanf("%f", &bonus);
 salary = salary+ salary*bonus/100;
 printf("your new salary is: %.2f", salary);

}