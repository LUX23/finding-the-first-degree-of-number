#include <stdio.h>
#include <math.h>

// ���� ����� ����� N. ���������� ������ i, ��� �������� 3^i>N. �������� N //
// ������ � ���������. ������� �������� N � i. //

int main()
{
    printf("������� �������� ����� N:");
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

