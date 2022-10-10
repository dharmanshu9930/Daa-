//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   void solve(vector<vector<int>> &store,vector<vector<bool>> &vis, int row, int col, int n, int m){

        

        if(row<0 || col<0 || row>=n || col>=m || vis[row][col]==true|| store[row][col] ==0){

            return;

        }

        vis[row][col]=true;

        solve(store,vis,row-1,col,n,m);

        solve(store,vis,row+1,col,n,m);

        solve(store,vis,row,col-1,n,m);

        solve(store,vis,row,col+1,n,m);

        

        

    }

    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {

        // code here

        

        vector<vector<int>> store(n,vector<int> (m,0));

        vector<vector<bool>> vis(n,vector<bool> (m,false));

        vector<int> ans;

       

        for(auto it: operators){

            int row = it[0];

            int col = it[1];

            store[row][col]=1;

            int count=0;

            for(int i=0;i<n;i++){

                for(int j=0;j<m;j++){

                    if(store[i][j]==1 && vis[i][j] == false){

                        solve(store,vis,i,j,n,m);

                        count++;

                    }

                    

                }

                

            }

            vector<vector<bool>> naya(n,vector<bool> (m,false));

            vis=naya;

            ans.push_back(count);

        }

        return ans;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends
