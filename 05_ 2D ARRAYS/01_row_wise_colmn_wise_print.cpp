#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int arr[20][20];
    int n = 3,m=3;
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            cin >> arr[r][c];
        }
    }
    cout << "Printing row wise "<< endl;
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            cout<< arr[r][c]<<" ";
        }
        cout << endl;
    }

    cout << "Printing col wise "<< endl;
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            cout<< arr[c][r]<<" ";
        }
        cout << endl;
    }
    return 0;
}