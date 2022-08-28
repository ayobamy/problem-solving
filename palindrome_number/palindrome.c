#include <stdio.h>

int main()
{
    int num, temp, result;
    result = 0;
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        int mod;
        mod = num % 10;
        result = (result * 10) + mod;
        
        num = num / 10;
    }
    
    if (result == temp)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}