//#include <bits/stdc++.h> 
//using namespace std;
/*int main(){
        int num1,num2,s;
        cout<<"enter num1"<<endl;
        cin>>num1;
        cout<<"enter num2"<<endl;
        cin>>num2;
        s =num1 + num2;
        cout<<"sum ="<<s;
return 0;         
} */
//linear search

/*void linearsearch(int arr[],int n,int key){ //n=num we passed in argument
   int temp = -1;
   for(int i=0;i<n;i++){
        if(arr[i]==key){
                cout<<"element found at location : "<<i<<endl;
                temp = 0;
                break;
        }
   }
   if (temp == -1){
          cout<<"element not found"<<endl;
   }
}


int main(){
       // int arr[]={55,62,7,11,173};
       int n;
       cout<<"enter size of array"<<endl;
       cin>>n;
        int arr[n];
        cout<<"please enter five elements of array"<<endl;
        for(int i =0;i<n;i++){
               cin>>arr[i];
        }
        cout<<"please enter an element to be found"<<endl;
        int num;
        cin>> num;
        linearsearch(arr,n,num);
return 0;
}*/
//binary search
/*int binarysearch(int arr[],int left,int right,int x){
        while(left<=right){
                int mid=left+(right-left)/2;
                if (arr[mid]==x){
                        return mid;
                }
                else if(arr[mid]<x){
                        left=mid+1;
                }
                else{
                        right=mid-1;
                }
                
        }
        return -1;
}
int main(){
        int num;
        int arr[10];
        int output;
        cout<<"enter 10 integers in ascending order"<<endl;
        for(int i=0;i<10;i++){
                cin>>arr[i];
        }
        cout<<"enter element to be found"<<endl;
        cin>>num;
        output=binarysearch(arr,0,9,num);

        if (output == -1){
        cout<<"no match found"<<endl;
        }
        else{
                cout<<"element found at:"<<output<<endl;
        } 
 return 0;       
}*/
//selection sort
/*void selectionsort(int arr[]){
        for (int i=0;i< 9 ;i++){
                int min=i;
                for(int j= i+1;j < 10; j++){
                        if (arr[j]<arr[min]){
                                min=j;
                        }
                }
                if(min!=i){
                        int temp = arr[min];// for swapping     
                        arr[min]= arr[i];
                        arr[i] = temp;
                }
        } 
}
int main(){
        int arr[10];
        cout<<"enter 10 integers in random order"<<endl;
        for(int i=0;i<10;i++){
              cin>>arr[i];
        }

        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<10;i++){
              cout<<arr[i]<<"  ";
        }
        cout<<endl;

        selectionsort(arr) ;  //sorting happening

        cout<<" SORTED ARRAY"<<endl;
        for(int i=0;i<10;i++){
              cout<<arr[i]<<"  ";
        }
        cout<<endl; 
           
        
 return 0;       
}*/

/*int main(){
int n;
cout<<"enter number of elements"<<endl;
cin>>n;
int arr[n];
cout<<"enter elements of an array"<<endl;
for(int i=0;i<n;i++){
        cin>>arr[i];
}
int p[n];
for(int i=0;i<n;i++){
        int temp = 1;
        for(int j=0;j<n;j++){
        if (j!= i){
                temp=temp*arr[j];}
        }
        p[i]=temp;
        cout<< p[i] <<" "<<endl;
}
return 0;        
}*/
/*int counttriplets(int arr[],int n,int sum){
        int temp = 0;
        for(int i=0;i<n-2;i++){
                for(int j=0;j<n-1;j++){
                        for(int k=0;j<n;j++){
                                if (arr[i]+arr[j]+arr[k]<sum)
                                temp++;
                        }
                }
        }
        return temp;
}
int main(){
        int n;
        cout<<"enter size of an array"<<endl;
        cin>>n;
        int sum;
        cout<<"enter value of sum"<<endl;
        cin>>sum;
        int arr[n];
        cout<<"enter elements of the array"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        cout<< "number of triplets: "<<counttriplets(arr,n,sum)<<endl;
        return 0;
}*/
//insertion sort
/*void insertionsort(int arr[],int n){
        int j=0;
        int key=0;
        for(int i=1;i<n-1;i++){
                key=arr[i];
                j=i-1;
                while(j>=0 && arr[j]>key){
                       arr[j+1]= arr[j];
                       j=j-1;
                }
        arr[j+1]=key;        
        }
}
int main(){
int n;
cout<<"Enter size of the array"<<endl;
cin>>n;

int arr[n];
cout<<"Enter elements of the array"<<endl;
for(int i=0;i<n;i++){
        cin>>arr[i];
}

cout<<"UNSORTED ARRAY"<<endl;
for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
}
cout<<endl;

insertionsort(arr,n);

cout<<"SORTED ARRAY"<<endl;
for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
}
return 0;
}*/
/* int main(){ //traversing
        int arr[5]={1,2,3,4,5};
        for(int i=0;i<5;i++){
                cout<<arr[i]<<"\n";
        }
        return 0;
}*/
/*void bubblesort(int arr[],int n){
        int rounds=0;
        for(int i=0;i<n;i++){
                 for(int j=0;j<n-i-1;j++){
                         if(arr[j]>arr[j+1]){
                                int temp = arr[j];
                                arr[j]= arr[j+1];
                                arr[j+1]=temp;
                                rounds++;
                        }
                }
        }
        cout<<endl;
        cout<<"number of rounds : "<<rounds<<endl;
        cout<<endl;
}
int main(){
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter elements of the array"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;

        bubblesort(arr,n);

          cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }

return 0;
}*/
//insertion
/*int main(){
        int i;
        int n;
        cout<<"enter size of array"<<endl;
        cin>>n;
        int arr[n-1];
        cout<<"enter (n-1) elements in an array "<<endl;
        for( i=0;i<n-1;i++){
                cin>>arr[i];
        }
        cout<<"enter element to insert"<<endl;
        int elem;
        cin>>elem;
        arr[i] = elem;
        cout<<"The New Array is: ";
        for( i=0; i<n; i++)
        cout<<arr[i]<<"  ";
        cout<<endl;

return 0;
}*/
//stikler thief
/*int thief(int arr[], int n){
     int sum1= arr[0];
     int sum2= 0;
     int result;   
        for(int i=1; i<n; i++) {
           result = (sum1 > sum2) ? sum1 : sum2;
           sum1 = sum2 +arr[i];
           sum2 =result;
            
        }
        
    return ((sum1 >sum2) ? sum1 :sum2); 
}
int main(){
        int n;
        cout<<"Number of houses in line"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Amount of money in each house"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
                } 
        cout<<endl;
        thief(arr,n) ;
        cout<<"Total money looted: "<<thief(arr,n);
return 0;        
}*/
//merge sort
/*#define endl "\n"
void merge(int arr[],int low,int mid,int high,int n){
        
        int i=low;int j =mid +1;
        int index=low;

        int temp[n];

        while(i<=mid && j<=high){
                if(arr[i]<=arr[j]){
                        temp[index]=arr[i];
                        i++;
                        index++;
                }
                else{
                        temp[index]=arr[j];
                        j++;
                        index++;
                }
                
        }
        if(j>high){
                while(i<=mid){
                        temp[index]=arr[i];
                        i++;
                        index++;
                } 
        } 
        else{
                while(j<=high){
                        temp[index]=arr[j];
                        j++;
                        index++;
                }
        }
        for (int p = low; p <= high; p++) {
        arr[p] = temp[p];
        }   
}       
void mergesort(int arr[], int low, int high, int n)
{
    if (low < high) {
        int mid = (low + high) / 2;

        mergesort(arr, low, mid, n);
        mergesort(arr, mid + 1, high, n);

        merge(arr, low, mid, high, n);
    }
}
int main(){
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Elements of array"<<endl;
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }

        mergesort(arr,0,(n-1), n);

        cout<<endl;

        cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void insertionsort(int arr[],int n){
        int j=0;
        int key;
        for(int i=1;i<n;i++){
                key=arr[i];
                j=i-1;
                while(j>=0 && arr[j]>key){
                       arr[j+1]= arr[j];
                       j=j-1;
                }
        arr[j+1]=key;        
        }
}
int main(){
        int n;
        cout<<"ENTER SIZE OF ARRAY"<<endl;
        cin>>n;
        int arr[n];
        cout<<"ENTER ELEMENTS IN ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        
        insertionsort(arr,n);

        cout<<endl;

        cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }

        return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void merge(int arr[],int low,int mid,int high,int n){
        int temp[n];
        int i=low;int j=mid+1;
        int index=low;
        while(i<=mid && j<=high){
                if(arr[i]<=arr[j]){
                        temp[index]=arr[i];
                        i++;
                        index++;
                }
                else{
                        temp[index]=arr[j];
                        j++;
                        index++;
                }
        }
                if(j>high){
                        while(i<=mid){
                                temp[index]=arr[i];
                                i++;
                                index++;
                        }
                }
                else {
                        while(j<=high){
                                temp[index]=arr[j];
                                j++;
                                index++;
                        }
                } 
                for(int x=low;x<=high;x++){
                arr[x]=temp[x];
        }  
}
void mergesort(int arr[],int low,int high,int n){
        if(low<high){
                int mid=(high+low)/2;
                
                mergesort(arr,low,mid,n);
                mergesort(arr,mid+1,high,n);

                merge(arr,low,mid,high,n);
        }
}
int main(){
        int n;
        cout<<"ENTER SIZE OF ARRAY"<<endl;
        cin>>n;
        int arr[n];
        cout<<"ENTER ELEMENTS OF ARRAY"<<endl;
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }

        mergesort(arr,0,n-1,n);
        
        cout<<endl;
         
        cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}*/
//quick sort (pivot as last element)
/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int partition(int arr[],int s,int e){
int pivot = arr[e];
int index=s;
for(int i=s;i<e;i++){
        if (arr[i]<= pivot){
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index]=temp;
                index++;
        } 
} 
                int temp = arr[e];
                arr[e] = arr[index];
                arr[index]=temp;
                return index;
}
void quicksort(int arr[],int s,int e){
        if(s<e){
                int p = partition(arr,s,e);
                quicksort(arr,s,p-1);
                quicksort(arr,p+1,e);
        }
}
int main()
{
  int n;
  cout<<"Enter size of array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter elements in random order"<<endl;
  for(int i=0;i<n;i++){
          cin>>arr[i];
  }
  cout<<"UNSORTED ARRAY"<<endl;
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
  quicksort(arr,0,(n-1));

  cout<<endl;

  cout<<"SORTED ARRAY"<<endl;
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }

  return 0;
}*/
//quick sort(for pivot as first element)
/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int partition(int arr[],int s,int e){
int pivot = arr[s];
int index=e;
for(int i=e;i>=s+1;i--){
        if (arr[i]<= pivot){
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index]=temp;
                index--;
        } 
} 
                int temp = arr[s];
                arr[s] = arr[index];
                arr[index]=temp;
                return index;
}
void quicksort(int arr[],int s,int e){
        if(s<e){
                int p = partition(arr,e,s);
                quicksort(arr,s,p-1);
                quicksort(arr,p+1,e);
        }
}
int main()
{
  int n;
  cout<<"Enter size of array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter elements in random order"<<endl;
  for(int i=0;i<n;i++){
          cin>>arr[i];
  }
  cout<<"UNSORTED ARRAY"<<endl;
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
  quicksort(arr,0,(n-1));

  cout<<endl;

  cout<<"SORTED ARRAY"<<endl;
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }

  return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int median(int arr[], int N){
    sort(arr, arr + N);
    if (N % 2 != 0){
        return (arr[N / 2]);}
    return (arr[(N - 1) / 2] + arr[N / 2]) / 2;
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int arr[], int start, int end)
{
    int Median = median(arr, end + 1);
    int PIVOT_ELEMENT = arr[Median];
    int count = 0;
    for (int i = start + 1; i <= end; i++)  {
        if (arr[i] <= PIVOT_ELEMENT)
            count++;
    }
 
    int PIVOT_INDEX = start + count;
    swap(&arr[PIVOT_INDEX], &arr[start]);
 
    while (start < PIVOT_INDEX && end > PIVOT_INDEX) 
    {
        while (arr[start] <= PIVOT_ELEMENT) 
            start++;
        
        while (arr[end] > PIVOT_ELEMENT) 
            end--;
        
        if (start < PIVOT_INDEX && end > PIVOT_INDEX) 
            swap(arr[start++],arr[end--]);
        
    }
 
    return PIVOT_INDEX;}
void quickSort(int arr[], int start, int end){
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1); 
    quickSort(arr, p + 1, end); 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    cout<<"BEFORE SORTING: "<<endl;
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout<<endl;
    
    sort(arr,arr+n);
    if (n % 2 != 0)
    {
         
         cout<< "MEDIAN: "<<(arr[n / 2])<<"\n";
    }
    else
    {
        cout<<"MEDIAN: "<<(arr[(n - 1) / 2] + arr[n / 2]) / 2<<"\n";
    }  
    quickSort(arr, 0, n - 1);
    cout<<"AFTER USING QUICK SORT: "<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;}
*/
/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
void bubblesort(int n,int arr[]){
      for(int i=0;i<n;i++){
         for(int j=0;j<n-i-1;j++){
             if(arr[j]>arr[j+1]){
                     int temp=arr[j];
                     arr[j]=arr[j+1];
                     arr[j+1]=temp;
             }
         }
      }
}
int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        bubblesort(n,arr);
        cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
void selectionsort(int n,int arr[]){
       for(int i=0;i<n;i++){
               int smallest=i;
               for(int j=i+1;j<n;j++){
                  if(arr[smallest]>arr[j]){
                        smallest=j;
                  }
               }
               int temp=arr[smallest];
               arr[smallest]=arr[i];
               arr[i]=temp;
       }
}
int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter elements of the array"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        selectionsort(n,arr);
        cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
void insertionsort(int n,int arr[]){
        for(int i=1;i<n;i++){
                int key =arr[i]; //element to be compared to elements in sorted part
                int j=i-1;
                while(j>=0 && arr[j]>key){
                     arr[j+1]=arr[j];
                     j--;
                } 
                arr[j+1]=key; 
        }
}
int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        insertionsort(n,arr);
        cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
void conquer(int arr[],int s,int mid,int e){
        int merge[e-s+1];
        int x=0;
        int m=mid+1;
        while(s<=mid && m<=e){
                if(arr[s]<=arr[m]){
                  merge[x]=arr[s];
                  x++;s++;
                }
                else{
                        merge[x]=arr[m];
                        x++;
                        m++;
                }
                while(s<=mid){
                        merge[x]=arr[s];
                        x++;
                        s++;
                }
                while(m<=e){
                        merge[x]=arr[m];
                        x++;
                        m++;
                }
        }
        for(int i=0,j=s;i<(e-s+1);i++,j++){
                arr[j]=merge[i];
        }
}
void divide(int arr[],int s,int e){
        int mid=s+(e-s)/2;
        if(s>=e){
                return;
        }
        divide(arr,s,mid);
        divide(arr,mid+1,e);
        conquer(arr,s,mid,e);
}
int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter elements in an array"<<endl;
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        divide(arr,0,n-1);
         cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
        }
        return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter elements of the array"<<endl;
        for(int i=0;i<n;i++){
              cin>>arr[i];
        }
        cout<<"UNSORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
              cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        cout<<"SORTED ARRAY"<<endl;
        for(int i=0;i<n;i++){
              cout<<arr[i]<<" ";
        }
        return 0;
}