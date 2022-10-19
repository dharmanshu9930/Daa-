#include <iostream>
 #include <string>
 using namespace std;
 int main(){
 int n;
 cin>>n;
 int a[n],i;
 for(i = 0;i<n;i++){
     cin>>a[i];
 }
 int j = n-1;
 i=0;
 while(i<j){
     
      if(a[i]=a[j]){
             return 1;
      }
      else{
         return 0;
      }
      i++;
     j--;
 }
// for(i = 0;i<n;i++)
// cout<<a[i]<<" ";
// i=0;
//  while(i<j){
//      swap(a[i],a[j]);
//      i++;
//      j--;
//  }
// for(i = 0;i<n;i++)
// cout<<a[i]<<" ";
 return 0;
 }