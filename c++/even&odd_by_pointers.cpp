

#include <stdio.h>
void main()
{
 int i,j,n,k;
 printf("enter the no of elements:-");
 scanf("%d",&n);
 int a[n],b[n],c[n];
 int odd=0,even=0;
 for(i=0;i<n;i++)
 {
    printf("Enter the element %d:- ",i+1);
    scanf("%d",a+i);
    
    
    if (*(a+i)%2==0)
    {
        *(b+even)=*(a+i);
        even=even+1;
    }
    
    else
    {
        *(c+odd)=*(a+i);
        odd=odd+1;
    }
 }
  
  
   for(i=0;i<n;i++)
 {
    printf("%d ",*(a+i)); 
 }   
 printf("\nEven elements");
 for(j=0;j<even;j++)
 {
     printf("%d ",*(b+j));
 }
 printf("\nodd elements");
 for(k=0;k<odd;k++)
 {
     printf("%d ",*(c+k));
 }
 
 
}
