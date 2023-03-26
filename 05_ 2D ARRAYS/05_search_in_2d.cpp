#include<bits/stdc++.h>
using namespace std;

bool searchIn2d(int arr[][4],int m,int n,int target){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target)
                return true;
                break;
        }
    }
    return false;
}
int main()
{
    int arr[4][4];
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    int target; 
    cout << "Enter taret "; cin >> target;
   bool found = searchIn2d(arr,4,4,target);  
    if(found) cout << "Found" << endl;
    else cout << "NOT" << endl;
    return 0;
}