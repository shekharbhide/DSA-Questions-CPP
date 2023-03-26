#include<bits/stdc++.h>
using namespace std;

void unionOfTwoArr(vector<int>arr1,vector<int>arr2){
    vector<int>ans;
    for(int i=0;i<arr1.size();i++){
        ans.push_back(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        ans.push_back(arr2[i]);
    }

    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}
int main()
{
    int n; cin >> n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
     int m; cin>> m;
     vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }

    unionOfTwoArr(arr1,arr2);
    return 0;
}