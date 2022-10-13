#include<stdio.h>
#include<math.h>
int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else{
    return (n)*fact(n-1);
    }
    

}
int main(){
    float sin,cos,x,degree;
    printf("enter the angle in degree:");
    scanf("%f",&degree);
    x=degree*(3.14/180);
    sin=x-pow(x,3)/fact(3)+pow(x,5)/fact(5);
    cos=1-pow(x,2)/fact(2)+pow(x,4)/fact(4);
    printf("sin%.2f = %.4f \ncos%.2f = %.4f",degree,sin,degree,cos);



    return 0;
}
