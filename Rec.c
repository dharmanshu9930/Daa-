#include<stdio.h>

#define MAX 100

int MaxElem(int []);

int n;

int main()

{

    int arr1[MAX],hstno,i;

	printf("\n\n Recursion : Get the largest element of an array :\n");	printf("------------------------------------------------------\n");

      printf(" Input the number of elements to be stored in the array :");

       scanf("%d",&n);

   

       printf(" Input %d elements in the array :\n",n);

       for(i=0;i<n;i++)

        {

	      printf(" element - %d : ",i);

	      scanf("%d",&arr1[i]);

	    }	

    hstno=MaxElem(arr1);//call the function MaxElem to return the largest element

    printf(" Largest element of the array is: %d\n\n",hstno);

    return 0;

}

int MaxElem(int arr1[])

{

    static int i=0,hstno =-9999;

    if(i < n)

    {

         if(hstno<arr1[i])

           hstno=arr1[i];

      i++;

      MaxElem(arr1);//calling the function MaxElem itself to compare with further element

    }

    return hstno;

}
