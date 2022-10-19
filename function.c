#include<stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d is -:",i);
        scanf("%d",&marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d student is -: %d\n", i,marks[i]);
    }
    return 0;
    
}