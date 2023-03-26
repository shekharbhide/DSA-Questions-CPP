#include<bits/stdc++.h>
using namespace std;
void printSubArrays_util(vector<int>&arr,int start,int end){
    //
    if(end == arr.size()){
        return;
    }

    for(int i=0;i<=end;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // RE
    printSubArrays_util(arr,start,end+1);
}
void printSubArrays(vector<int>&arr){
    for(int start =0;start<arr.size();start++){
        int end = start;
        printSubArrays_util(arr,start,end);
    }
}
int main()
{
    int n; cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    printSubArrays(arr);
    return 0;
}