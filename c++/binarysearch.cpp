#include<iostream>
using namespace std;
int binarysearch(int n,int key,int arr[]){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+e/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
        
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements you want to enter:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    int key;
    cout<<"Enter the number for which you want to search for:";
    cin>>key;
    cout<<"It's index is:"<<binarysearch(n,key,arr);
    return 0;
}
