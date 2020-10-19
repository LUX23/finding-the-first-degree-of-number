#include <stdio.h>
#include <math.h>

// Дано целое число N. Определить первое i, для которого 3^i>N. Значение N //
// ввести в программу. Вывести значения N и i. //

int main()
{
    printf("Введите значение числа N:");
    int N,i;
    scanf("%d", &N);
    if (N > 0)
    {
    i = log(N) / log(3);
    i = i + 1;
    }
    else
        if (N > (-4))
        i = 0;

    printf("N=%d\ni=%d\n", N, i);
    return 0;
}

