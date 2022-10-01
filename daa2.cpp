// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define int long long int

// struct Pair{
//      int min;
//      int max;
// };

// Pair getminmax(int arr[],int n){

//      struct Pair minmax;

//       if(n==1){
//           minmax.max=arr[0];
//           minmax.min=arr[0];
//       }
//       if(arr[0]>arr[1]){
//           minmax.max=arr[0];
//           minmax.min=arr[1];
//       }
//       else{
//           minmax.max=arr[1];
//           minmax.min=arr[0];
//       }
//       for(int i=2;i<n;i++){
//            if(arr[i]>minmax.max)
//            minmax.max=arr[i];
//            else if(arr[i]<minmax.min)    
//            minmax.min = arr[i];
//     }
//     return minmax;
// }
// int32_t main(){
//      ios_base::sync_with_stdio(false);
//      cin.tie(NULL);
//      int n;cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//           cin>>arr[i];
//      }
//      struct Pair minmax=getminmax(arr,n);

//      cout<<"Maximum element: "<<minmax.max<<endl;
//      cout<<"Maximum element: "<<minmax.min<<endl;

//      return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define int long long int
// void conquer(int arr[],int s,int e,int&min,int&max){
//      if (s == e){
//         if (max < arr[s]){
//             max = arr[s];
//         }
//         if (min > arr[e]){
//             min = arr[e];
//         }
//         return;
//     }
//     if (s - e == 1){
//         if (arr[s] < arr[e]){
//             if (min > arr[s]){
//                 min = arr[s];
//             }
//             if (max < arr[e]){
//                 max = arr[e];
//             }
//         }
//         else{
//             if (min > arr[e]){
//                 min = arr[e];
//             }
//             if (max < arr[s]){
//                 max = arr[s];
//             }
//         }
//         return;
//     }
//     int mid=s+(e-s)/2;
//     //divide
//     conquer(arr,s,mid,min,max);
//     conquer(arr,mid+1,e,min,max);
// }
// int32_t main(){
//      ios_base::sync_with_stdio(false);
//      cin.tie(NULL);

//      int n;cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//     int max = INT_MIN;
//     int min = INT_MAX;
//     conquer(arr,0,n-1,min,max);
//     cout << "The minimum element in the array : " << min << endl;
//     cout << "The maximum element in the array : " << max << endl;
//     return 0;
// }
//implement priority queue
// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define int long long int
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     priority_queue<int> pq;
//     pq.push(16);
//     pq.push(67);
//     pq.push(2);
//     pq.push(89);
//     cout<<"size of priority queue = "<<pq.size()<<" ";
//     cout<<endl;
//     while(!pq.empty()){
//         cout<<"top = "<<pq.top()<<endl;
//         pq.pop();
//     }
//     return 0;
// }
//Karatsuba algo
// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define int long long int
// int karatsuba(int x,int y){

//     if((x<10)||(y<10))
//         return (x*y);
//     else{
//     string str1=to_string(x);
//     string str2=to_string(y);
//     int l1=str1.length();
//     int l2=str2.length();

//     int n=max(l1,l2);
    
//     int half=(n/2);

//     int power=pow(10,half);
//     int a=floor(x/power);
//     int b=x%power;
//     int c=floor(y/power);
//     int d=y%power;
    
//     int ac=karatsuba(a,c);
//     int bd=karatsuba(b,d);
//     int ad_plus_bc=karatsuba((a+b),(c+d))-(ac+bd);
    
//     int p1=pow(10,2*half);
//     int p2=pow(10,half);
    
//     return (ac*p1)+(ad_plus_bc*p2)+bd;
//     }
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int x,y;
//     cin>>x>>y;
    
//     cout<<karatsuba(x,y)<<endl;

//     return 0;
// }
//prim's algo
/*#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//creating adjacency list
    vector<pair<int, int> >adj[5];
    
    adj[0].push_back({1,2});
    adj[0].push_back({3,6});
    adj[1].push_back({0,2});
    adj[1].push_back({2,3});
    adj[1].push_back({3,8});
    adj[1].push_back({4,5});
    adj[2].push_back({1,3});
    adj[2].push_back({4,7});
    adj[3].push_back({0,6});
    adj[3].push_back({1,8});
    adj[4].push_back({1,5});
    adj[4].push_back({2,7});


    vector<int> key(5);
    vector<bool> mst(5);
    vector<int> parent(5);

    for(int i=0;i<=5;i++){
    key[i]=INT_MAX;
    parent[i]=-1;
    mst[i]=false;
}
//start algo
    key[0]=0;
    parent[0]=-1;
    
    for(int i=0;i<4;i++){
        int min = INT_MAX,u;
    //finding minimum value node
    for(int v=0;v<5;v++){
        if(mst[v]==false && key[v]< min){
            u=v;
            min=key[v];
        }
    }
    //mark min node as true
    mst[u]=true;
    
    for (auto it : adj[u]) {
        int v = it.first;
        int weight = it.second;
        if (mst[v] == false && weight < key[v]) 
            parent[v] = u, key[v] = weight; 
        }
            
    } 
    for (int i = 1; i < 5; i++) 
        cout << parent[i] << " - " << i <<" \n"; 

    return 0;
}*/
//dynamic programming
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

    int fib(int n,vector<int> &dp){
        //base case
        if(n<=1){
            return n;
        }
        //step3
        else if(dp[n]!=-1){
            return dp[n];
        }
        //step 2
        dp[n]=fib(n-1,dp)+fib(n-2,dp);
        return dp[n];
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;

    //step 1
    vector<int>dp(n+1);
    for(int i=0;i<=n;i++){
    dp[i]=-1;

    cout<<fib(n,dp)<<endl;
    }

    return 0;
}