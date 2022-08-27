#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("The absolute value is: %d\n", num);
    }
    else {
        // num = -num
        num = num * -1;
        printf("The absolute value is: %d\n", num);
    }

    return 0;
}