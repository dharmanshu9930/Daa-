#include<stdio.h>
int main(){
    int rows,coef=1;
    printf("enter the rows:");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++)
    {
        for (int space = (rows-i); space > 0; space--)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            if (i==0||j==0)
            {
                coef=1;
            }
            else{
             coef=coef*(i-j+1)/j;
           }
           printf("%d ",coef);
        }
        printf("\n");
        
        
    }
    




    return 0;
}
