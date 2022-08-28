#include <stdio.h>

int main()
{
    int num, mod, arm, temp;
    arm = 0;

    scanf("%d", &num);
    
    temp = num;
    while (num > 0)
    {
        mod = num % 10;
        arm += mod * mod * mod;

        num = num / 10;
    }

    if (temp == arm)
    {
        printf("%d is an Armstrong number\n", temp);
    }
    else
    {
        printf("%d is not an Armstrong number\n", temp);
    }
    return 0;
}