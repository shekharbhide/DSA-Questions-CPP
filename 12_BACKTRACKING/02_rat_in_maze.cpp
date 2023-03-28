#include<bits/stdc++.h>
using namespace std;
bool isSafe(int i,int j,int **rat,int rowSize,int colSize,vector<vector<bool>>&visited){
    if((i>=0 && i<rowSize) && (j>=0 && j<colSize) && rat[i][j]==1 && visited[i][j]==false){
        return true;
    }
    else return false;
}
void ratInMaze(int **rat,int rowSize,int colSize,int i,int j,
        vector<vector<bool>>&visited,vector<string>&path,string output){
            // Base Case
            if(i == rowSize-1 && j==colSize-1){
                path.push_back(output);
                return;
            }

            // Down -> i=i+1, j = j
            if(isSafe(i+1,j,rat,rowSize,colSize,visited)){
                //mark visited
                visited[i+1][j]=true;
                output.push_back('D');
                ratInMaze(rat,rowSize,colSize,i+1,j,visited,path,output);
                output.pop_back();

                //backtracking
                visited[i+1][j]=false;
            }

            // Left -> i=i,j=j-1
            if(isSafe(i,j-1,rat,rowSize,colSize,visited)){
                //mark visited
                visited[i][j-1]=true;
              output.push_back('L');
                ratInMaze(rat,rowSize,colSize,i,j-1,visited,path,output);
               output.pop_back();

                //baktracking
                visited[i][j-1]=false;
            }

            //Right i = i, j = j+1
            if(isSafe(i,j+1,rat,rowSize,colSize,visited)){
                //mark visited
                visited[i][j+1]=true;
               output.push_back('R');
                ratInMaze(rat,rowSize,colSize,i,j+1,visited,path,output);
                output.pop_back();
                //backtracking
                visited[i][j+1]=false;
            }
            
            //Up i =i-1,j=j
            if(isSafe(i-1,j,rat,rowSize,colSize,visited)){
                //mark visited
                visited[i-1][j]=true;
               output.push_back('U');
                ratInMaze(rat,rowSize,colSize,i-1,j,visited,path,output);
                output.pop_back();
                //backt
                visited[i-1][j]=false;
            }
}
int main()
{
   /*  int rat[4][4] = {
            {1, 0, 0, 0},
            {1, 1, 0, 1}, 
            {1, 1, 0, 0},
            {0, 1, 1, 1},
            //DDRDRR DRDDRR
    };

    int rowSize = 4;
    int colSize = 4; */
    
    int rowSize;
    int colSize;
     cout << "Enter the number of rows: ";
    cin >> rowSize;
    cout << "Enter the number of columns: ";
    cin >> colSize;

    int **rat = new int* [rowSize];
    for(int i=0;i<rowSize;i++){
        rat[i] = new int[colSize];
    }

    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cin >> rat[i][j];
        }
    }

    if(rat[0][0]==0){
        cout << "src is 0 -> no path to reach dest" << endl;
        return 0;
    } 
    vector< vector <bool> > visited(rowSize,vector<bool>(colSize,false));
    visited[0][0] = true;
    vector<string>path;
    string output="";
    
    ratInMaze(rat,rowSize,colSize,0,0,visited,path,output);
     // free memory
    for (int i = 0; i < rowSize; i++) {
        delete [] rat[i];
    }
    delete [] rat;

    for(int i=0;i<path.size();i++){
        cout << path[i] << endl;
    }

     // free memory
    for (int i = 0; i < rowSize; i++) {
        delete [] rat[i];
    }
    delete [] rat;
    return 0;
}