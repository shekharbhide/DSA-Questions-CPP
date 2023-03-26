#include<bits/stdc++.h>
using namespace std;

int minIn2dArr(int arr[][3],int n,int m){
    int mini =INT_MAX;
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            if(arr[r][c]<mini){
                mini = arr[r][c];
            }
        }
    }
    return mini;
}
int maxIn2dArr(int arr[][3],int n,int m){
    int maxi =INT_MIN;
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            if(arr[r][c]>maxi){
                maxi = arr[r][c];
            }
        }
    }
    return maxi;
}
int main()
{
    int n=3; 
    //cin >> n;
    int m=3; 
    //cin >> m;
    int arr[3][3];
    
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            cin >> arr[r][c];
        }
    }

    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            cout<< arr[r][c] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout <<  "Max in 2D array " << maxIn2dArr(arr,3,3) << endl;
    cout <<  "Min in 2D array " << minIn2dArr(arr,3,3) << endl;
    
    return 0;
}