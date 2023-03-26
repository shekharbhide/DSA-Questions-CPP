#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rowSumPrint(int arr[][3],int n,int m){
   
    for(int r=0;r<n;r++){
         int sum = 0;
        for(int c=0;c<m;c++){
            sum = sum + arr[r][c];
        }

        cout << "At row "<< r <<"-" << sum << endl;
    }
}
int main()
{
    int arr[3][3];
    int n = 3;
    int m=3;
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            cin >> arr[r][c];
        }
    }

    rowSumPrint(arr,n,m);
    return 0;
}