//armstrong in C?
#include <stdio.h>
#include <stdbool.h>

#ifndef DEBUG
#define DEBUG 0
#endif

static int power(int x, int n)
{
    int r = 1;
    int c = n;
    while (c-- > 0)
        r *= x;
    if (DEBUG) printf("    %d**%d = %d\n", x, n, r);
    return r;
}

static bool isArmstrongNumber(int n)
{
    int y = 0;
    int a = n;
    int p;
    for (p = 0; a != 0; a /= 10, p++)
        ;
    if (DEBUG) printf("    n = %d, p = %d\n", n, p);
    a = n;
    for (int i = 0; i < p; i++)
    {
        y += power(a % 10, p);
        a /= 10;
    }
    return(y == n);
}

int main(void)
{
    while (1)
    {
        int a;
        printf("Enter the number you want to identify as an Armstrong number or not: ");
        if (scanf("%d", &a) != 1 || a <= 0)
            break;
        else if (isArmstrongNumber(a))
            printf("%d is an Armstrong number\n", a);
        else
            printf("%d is not an Armstrong number\n", a);
    }

    return 0;
}


