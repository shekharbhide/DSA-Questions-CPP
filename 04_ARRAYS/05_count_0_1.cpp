#include<bits/stdc++.h>
using namespace std;

void count01(vector<int>&arr){
    int cnt_0 =0;
    int cnt_1 =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            cnt_0++;
        }
        if(arr[i]==1){
            cnt_1++;
        }
    }
    cout << "count of 0s " << cnt_0 << endl;
    cout << "count of 1s " << cnt_1 << endl;

}
int main()
{
    int n; cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    count01(arr);
    return 0;
}