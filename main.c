#include <stdio.h>
#include <math.h>
#include <locale.h>

/// Дано целое число N. Определить первое i, для которого 3^i>N. Значение N
/// ввести в программу. Вывести значения N и i.

int main()
{
    char *locale = setlocale(LC_ALL, "");

    printf("Введите значение числа N:");
    int N,i;
    scanf("%d", &N);

    if (N > 0) // при положительных значениях N
    {
    i = log(N) / log(3); // находим значение числа i, при котором 3^i>N
    i = i + 1;
    }
    else
    i = 0; // при нуле и отрицательных числах, число i может быть любым;
           // но по условию нужно определить первое i
    printf("N=%d\ni=%d\n", N, i);

    return 0;
}
