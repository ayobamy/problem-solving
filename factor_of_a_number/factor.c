#include<stdio.h>

int main()
{
    int N,X;
    scanf("%d%d", &N, &X);

    if (N % X == 0) {
        printf("Yes, %d is a factor of %d\n", X, N);
    }
    else {
        printf("No, %d is not a factor of %d\n", X, N);
    }

    return 0;
}