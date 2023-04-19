//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    bool isSafe(int row,int col,int grid[N][N],int value){
        for(int i=0;i<N;i++){
            //check row
            if(grid[row][i]==value)
                return false;
            
            // check col
            if(grid[i][col]==value)
                return false;
            
            // 3*3 grid
            if(grid[(row/3)*3 + (i/3)][(col/3)*3 + (i%3)]==value){
                return false;
            }
        }
        return true;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    for(int val=1;val<=9;val++){
                        if(isSafe(i,j,grid,val)){
                            grid[i][j]=val;
                            
                            bool remSol = SolveSudoku(grid);
                            if(remSol == true){
                                return true;
                            }
                            else
                             grid[i][j]=0;
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
        // Your code here 
       SolveSudoku(grid);
       cout <<endl << endl << "OUTPUT" <<endl << endl;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout << grid[i][j]<<" ";
            }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends

/*
1
3 0 6 5 0 8 4 0 0
5 2 0 0 0 0 0 0 0
0 8 7 0 0 0 0 3 1
0 0 3 0 1 0 0 8 0
9 0 0 8 6 3 0 0 5
0 5 0 0 9 0 6 0 0
1 3 0 0 0 0 2 5 0
0 0 0 0 0 0 0 7 4
0 0 5 2 0 6 3 0 0


OUTPUT

3 1 6 5 7 8 4 9 2
5 2 9 1 3 4 7 6 8
4 8 7 6 2 9 5 3 1
2 6 3 4 1 5 9 8 7
9 7 4 8 6 3 1 2 5
8 5 1 7 9 2 6 4 3 
1 3 8 9 4 7 2 5 6
6 9 2 3 5 1 8 7 4
7 4 5 2 8 6 3 1 9
*/



// LEETCODE

/*
class Solution {
public:
    bool isSafe(int row,int col,vector<vector<char>>&board,char value){
        for(int i=0;i<board.size();i++){
            // check for row
            if(board[row][i]==value)
                return false;

            // check for col
             if(board[i][col]==value)
                return false;

            // check for 3 * 3 box
            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==value)
                return false;        
        }
        return true;
    }
    bool solve(vector<vector<char>>&board){
        int n=board.size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //check for empty ce;
                if(board[i][j]=='.')
                {
                    //try to fill with values ranging from 1 to 9
                    for(char val='1';val<='9';val++)
                    {
                        if(isSafe(i,j,board,val))
                        {
                            //place the value
                            board[i][j]=val;
                            
                            // rec call for rem solns
                            bool remainingSoln = solve(board);

                            if(remainingSoln==true){
                                return true;
                            }
                            else{
                                //backtrack
                                board[i][j]='.';
                            }
                        }
                    }
                    //agr 1 se 9 tk koi bhi value se soln nahi nikla current cell pr that means picchhe kahi pr Galti he
                    //go back by returning false
                 
                    return false;

                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
         solve(board);
    }
};
*

/