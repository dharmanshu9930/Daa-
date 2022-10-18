#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int iplno;
    printf("Enter the value of iplno:\n");
    scanf("%d",&iplno);
    int temp=iplno;
    int i=0,j=0;
    while(temp!=0)
    {
        int t=temp%8;
        a[i++]=t+48;
        temp/=8;
    }
    printf("Octal value:\n");
    for(int k=i-1;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\n");
    temp=iplno;
    while(temp!=0){
        int t=temp%16;
        if(t<10)
            b[j++]=48+t;
        else
            b[j++]=87+t;
        temp/=16;
    }
    printf("Heaxdecimal value:\n");
    for(int k=j-1;j>=0;j--){
        printf("%c",b[j]);
    }
  return 0;
}
