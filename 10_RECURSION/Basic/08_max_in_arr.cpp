#include<bits/stdc++.h>
using namespace std;

void maxInArray(int arr[],int n,int& maxi,int i){
    // Base case
    
    if(i>=n){
        return;
    }

    maxi = max(arr[i],maxi);
   
    maxInArray(arr,n,maxi,i+1);

}
int main()
{
    int n; cin >> n;
    int arr[30];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int maxi = INT_MIN;
    int i=0;
    maxInArray(arr,n,maxi,i);
    cout << maxi;
    return 0;
}