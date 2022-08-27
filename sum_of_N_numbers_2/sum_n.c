#include <stdio.h>

// Method 2 - without loop
int main()
{
    int N, sum;
    scanf("%d", &N);

    N = N * (N + 1);
    
    sum = N / 2;
    printf("%d\n", sum);

    return 0;
}
