#include <iostream>
using namespace std;
void merging(int*a,int start,int mid,int end){
    int *temp= new int [end -start+1];
    int j,k=0,i;
    for( i=start,j=mid+1;i<=mid && j<=end;){
        if(a[i]>a[j]){
            temp[k]=a[j];
            j++;
            k++;
        }
        else{
            temp[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=a[i];
            i++;
            k++;
    }
    while(j<=end){
        temp[k]=a[j];
            j++;
            k++;
    }
    for(int i=start;i<=end;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int index=start;
    for(int i=0;i<k;i++){
        a[index++]=temp[i];
    }
}
void merge(int *a,int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    merge(a,start,mid);
    merge(a,mid+1,end);
    merging(a,start,mid,end);
}
void mergesort(int *a, int n){
    merge(a,0,n);
}
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    delete [] a;
}
