#include <stdio.h>
#include <math.h>

int main()
{
    int n, mod, sum, i;
    sum = 0;
    
    scanf("%d", &n);
    
    for (i = 1; i < n; i++)
    {
        mod = n % i;
        if (mod == 0)
        {
            sum += i;
        }
    }
    
    if (sum == n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    

    return 0;
}