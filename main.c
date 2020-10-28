#include <stdio.h>
#include <math.h>
#include <locale.h>

// Дано целое число N. Определить первое i, для которого 3^i>N. Значение N
// ввести в программу. Вывести значения N и i.

int body(int N, int i)
{
    if (N > 0) // при положительных значениях N
    {
    i = log(N) / log(3); // находим значение числа i, при котором 3^i>N
    i = i + 1;
    }
    else
    i = 0; // при нуле и отрицательных числах, число i может быть любым;
           // но по условию нужно определить первое i
    return(i);
}

int main()
{
    char *locale = setlocale(LC_ALL, "RUSSIAN");
    
    int N, i;
    printf("Введите значение числа N: ");
    scanf("%d", &N);
    i = body(N, i);
    printf("N=%d\ni=%d\n", N, i);

    return 0;
}
