#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>>&board,int n,int row,int col){
        int i,j;
        i=row;
        j=col;
        //for left row
        while(j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            j--;
        }

        // for left upper diagonal
        i=row;
        j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }

        //for bottm lower diagonal
          i=row;
        j=col;
        while(i<n && j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
 void solve(vector<vector<char>>&board,int n,int col,int &count){
        // Base Case
        if(col >= n){
            //storeSoln(board,n,ans);
            count++;
            return;
        }

        for(int row =0;row<n;row++){
            if(isSafe(board,n,row,col)){
                board[row][col]='Q';
                solve(board,n,col+1,count);
                board[row][col]='.';
            }
        }
    }

    int countSoln(vector<vector<char>>&board,int n){
        int count = 0;
        int col=0;
        solve(board,n,col,count);
        return count;
    }
   
    int totalNQueens(int n) {
         vector<vector<char>>board(n,vector<char>(n,'.'));
         return countSoln(board,n);
    }

int main()
{
    int n; cin >> n;
    cout << totalNQueens(n);
    return 0;
}

 
        
