#include<bits/stdc++.h>
using namespace std;
void minInArray(int arr[],int n,int i,int& mini){
    //base case
    if(i >= n){
        return;
    }
    else{
        //solve 1 case
        mini = min(arr[i],mini);

        //rest  will do rec;
        minInArray(arr,n,i+1,mini);
    }
}
int main()
{
    int n; cin >> n;
   int arr[30];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int i=0;
    int mini = INT_MAX;
    minInArray(arr,n,i,mini);
    cout << mini << endl;
    return 0;
}