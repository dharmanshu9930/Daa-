#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char str[100][25];
    
    char temp[100];
    printf("enter the no of names:-");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        printf("enter the names:");
      scanf("%s",&str[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
       for (int j = 0; j < n-i-1; j++)
        {
            
            if (strcmp(str[j+1],str[j])<0)
            {
                
                strcpy(temp,str[j+1]);
                strcpy(str[j+1],str[j]);
                strcpy(str[j],temp);
            }
         
        }
        
    }
    
    for(int i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    

    return 0;
}
