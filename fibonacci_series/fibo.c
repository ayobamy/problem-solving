#include <stdio.h>
int main()
{
    int n, a, b, i, result;

    scanf("%d", &n);

    a = 0; b = 1;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a);

        result = a + b;
        a = b;
        b = result;
    }
    printf("\n");

    return 0;
}