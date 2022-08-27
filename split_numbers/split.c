#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    while (num > 0)
    {
        int mod;
        mod = num % 10;
        printf("digit - ");
        printf("%d\n", mod);
        
        num = num / 10;
    }
    
    return 0;
}