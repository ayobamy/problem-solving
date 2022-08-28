#include <stdio.h>

int main()
{
    int num, mod, rev;
    rev = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        mod = num % 10;

        rev = (rev * 10) + mod;
        num = num / 10;
    }
    
    printf("%d\n", rev);

    return 0;
}