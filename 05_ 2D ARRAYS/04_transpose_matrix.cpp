#include<bits/stdc++.h>
using namespace std;

void transposeMatrix(int arr[][3],int transpose[][3],int n,int m){
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            transpose[c][r] = arr[r][c];
        }
    }

    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            cout << transpose[r][c]<< " ";
        }
        cout << endl;
    }
}
int main()
{
    int n=3; 
    //cin >> n;
    int m=3; 
    //cin >> m;
    int arr[3][3];
    int transpose[3][3];
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

    cout << "Transpose of given Matrix " << endl;
    transposeMatrix(arr,transpose,3,3);
    return 0;
}