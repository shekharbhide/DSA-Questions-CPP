#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int &targetSum)
{
    //base case
    if(targetSum == 0){
        return 0;
    }

    if(targetSum < 0){
        return INT_MAX;
    }

    int mini = INT_MAX;

    for(int i=0;i<arr.size();i++){
        int updateTarget = targetSum-arr[i];
        // cout << "targte " << updateTarget << endl;
        int ans = solve(arr,updateTarget);

        if(ans != INT_MAX){
            mini = min(mini,ans + 1);
        }
    }
    return mini;
}    
int main()
{
    int n; cin >>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int targetSum;
    cout << "Enter targetsum : ";
    cin >> targetSum;
    int ans = solve(arr,targetSum);
    cout << "Minimum no. of elements to reach targseSum->>  " << ans << endl;

    return 0;
}