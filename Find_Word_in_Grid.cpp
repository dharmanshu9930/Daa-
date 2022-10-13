#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 5
int find_letter(char grid[r][c],string word,int x,int y,int row,int col,int level)
{
//     cout<<"___________________________"<<endl;
//     cout<<"level = "<<level<<endl;
//     cout<<"x = "<<x<<endl;
//     cout<<"y = "<<y<<endl;
//     cout<<"grid["<<x<<"]["<<y<<"] = "<<grid[x][y]<<endl;
//     cout<<"___________________________"<<endl;
    int l=word.length();
    if(level==1)
    {
        cout<<"level becomes 1"<<endl;
        return 1;
    }
    if(x<0||y<0||x>=row||y>=col)
    {
        cout<<"invalid conditions"<<endl;
        return 0;
    }
//     cout<<"======================================="<<endl;
//     cout<<"word[level] = "<<word[level]<<", level = "<<level<<endl;
//     cout<<"grid[x][y] = "<<grid[x][y]<<",  x = "<<x<<", y = "<<y<<endl;
//     cout<<"======================================="<<endl;
    if(grid[x][y]==word[level])
    {
        char temp=grid[x][y];
        grid[x][y]='#';
        int ans;
        cout<<"ans = "<<ans<<endl;
        
        ans=
         find_letter(grid,word,x-1,y,row,col,level+1)|
         find_letter(grid,word,x+1,y,row,col,level+1)|
         find_letter(grid,word,x,y-1,row,col,level+1)|
         find_letter(grid,word,x,y+1,row,col,level+1);
         
         grid[x][y]=temp;
//          cout<<"-------------------------------"<<endl;
//          cout<<"grid[x][y] = "<<grid[x][y]<<", x = "<<x<<", y = "<<endl;
//          cout<<"-------------------------------"<<endl;
         return ans;
    }
    else
    {
        cout<<"returnes 0"<<endl;
        return 0;
    }
}
int word_present(char grid[r][c],string word,int row ,int col)
{
    int l=word.length();
    if(l>row*col)
    {
        return 0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            //agar grid me sabse pehla letter of that word mil gaya to uske aaju baju me check karo baki lettters uss word ke using find_letter funtion
            if(grid[i][j]==word[0])
            {
                if(find_letter(grid,word,i,j,row,col,0))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main() 
{
    char grid[r][c]=
    {"ABCE",
     "SFCS",
     "ADEE"
    };
    if(word_present(grid,"ADBM",r,c))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
