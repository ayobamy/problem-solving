#include <stdio.h>

int main()
{
    int num, sum;
    sum = 0;
    scanf("%d", &num);
    
    while (num > 0) 
    {
        int mod;
        mod = num % 10;
        
        sum += mod;
        num = num  / 10;  
    }
    printf("The sum is %d\n", sum);

    return 0;
}