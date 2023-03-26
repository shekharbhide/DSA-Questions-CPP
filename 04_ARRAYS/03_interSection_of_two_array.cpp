#include<bits/stdc++.h>
using namespace std;

void interSectionOfTwoArr(vector<int>arr1,vector<int>arr2){
    vector<int>ans;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr2[j]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}

int main()
{
    int n; cin >> n;
    vector<int>arr1(n);
    for(int i=0;i<arr1.size();i++){
        cin >> arr1[i];
    }
    int m; cin>> m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }

    interSectionOfTwoArr(arr1,arr2);
    return 0;
}