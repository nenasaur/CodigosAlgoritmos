#include <stdio.h>

/*
/d = inteiro; %xf = float onde x é o número de casas decimais
printf() = saída (terminal)
scanf() = entrada (teclado)
fgets() = leitura de linha (texto com espaço)
*/
int main()
{
    int number, SquaredNumber;
    printf("Pick a number to be squared:  ");
    scanf("%d", &number);
    SquaredNumber = number*number;
    printf("The square of %d is %d !", number, SquaredNumber);

    return 0;
}