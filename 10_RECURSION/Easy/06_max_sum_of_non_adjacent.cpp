#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr,int i,int sum,int& maxi){
    //base case
    if(i >= arr.size()){
        //update maxi
        maxi = max(maxi,sum);
        return;
    }

    
    //include
    
    solve(arr,i+2,sum+arr[i],maxi);

    //exclude
    solve(arr,i+1,sum,maxi);

    
}
int main()
{
    int n; cin >>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    int i = 0;
    int maxi = INT_MIN;
    solve(arr,i,sum,maxi);
    cout << maxi;
    return 0;
}