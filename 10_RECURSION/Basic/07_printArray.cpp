#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n,int i){

    if(i==n){
        cout << "at index " << i <<" <- STOP" << endl;
        return;
    }
    
      cout << "at index " << i << endl;
    cout << arr[i] << " " << endl;

    printArray(arr,n,i+1);

    /*  cout << "at index " << i << endl;
    cout << arr[i] << " " << endl; */
}
int main()
{
    int n; cin >> n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int i=0;
    printArray(arr,n,i);
    return 0;
}