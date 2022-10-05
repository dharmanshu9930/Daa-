#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,m,n;
    for(i=1;i<=4;i++){
        for(j=4;j>=i;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        for(l=2;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
        }
    for(n=1;n<=3;n++){
        for(m=0;m<=n;m++){
            cout<<" ";
        }
        for(int b=3;b>=n;b--){
            cout<<"*";
        }
        for(int v=2;v>=n;v--){
            cout<<"*";
        }
        cout<<endl;

    }
       
        cout<<endl;
        return 0;
    }
