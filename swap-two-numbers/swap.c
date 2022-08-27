#include<stdio.h>

int main()
{
    int a, b, tmp;
    scanf("%d%d", &a, &b);

    printf("Before swap:\t a = %d, b = %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("After swap:\t a = %d, b = %d\n", a, b);
    return 0;
}