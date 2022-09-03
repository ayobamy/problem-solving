#include <stdio.h>

int main()
{
    int num, i, prime;
    prime = 0;
    
    scanf("%d", &num);
    
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
            break;
        }
    }
    
    if (prime == 0)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not Prime number\n");
    }

    return 0;
}