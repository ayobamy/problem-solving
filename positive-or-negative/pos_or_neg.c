#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("Neither positive nor negative\n");
    }
    else if (num > 0) {
        printf("Positive\n");
    }
    else {
        printf("Negative\n");
    }
    
    return 0;
}