#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=i;space<=n;space++){
            cout<<" ";
        }
        for(int j=1;j<=2*n-1;j++){
            if(i==n||j==1||j==2*i-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
