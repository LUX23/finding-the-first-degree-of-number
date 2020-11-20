// Дано целое число N. Определить первое i, для которого 3^i>N. Значение N
// ввести в программу. Вывести значения N и i.
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
    char *locale = setlocale(LC_ALL, "RUSSIAN");

    int N,i;
    printf("Введите значение числа N: ");
    scanf("%d", &N);

    i = find(N);

    printf("N=%d\ni=%d\n", N, i);

    getch();
    return 0;
}

