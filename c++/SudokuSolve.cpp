#include<bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0
#define N 9

 bool isValid(int grid[N][N],int row, int col, int k)
    {
        for(int i=0;i<9;i++)
        {
            if(grid[i][col]==k)  return false;
            if(grid[row][i]==k)  return false;
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==k) return false;
        }
        
        return true;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        for(int i=0;i<N;i++){
             for(int j=0;j<N;j++){
                 if(grid[i][j]==0){
                     for(int k=1;k<=9;k++)
                     {
                         if(isValid(grid,i,j,k))
                         {
                             grid[i][j]=k;
                             
                             if(SolveSudoku(grid)==true)
                              return true;
                              
                             else grid[i][j]=0; 
                         }
                     }
                     return false;
                 }
             }
        }
        return true;
         
    }
        //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
       for(int i=0;i<N;i++){
       for(int j=0;j<N;j++)
       cout<<grid[i][j]<<" ";
       cout<<endl;
       }
    }

int main()
{
     // 0 means unassigned cells
    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
        printGrid(grid);
        cout<<endl<<endl;               
    if (SolveSudoku(grid) == true)
        printGrid(grid);
    else
        cout << "No solution exists";

    return 0;
}