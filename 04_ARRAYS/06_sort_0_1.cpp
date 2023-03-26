#include<bits/stdc++.h>
using namespace std;

void sort01(vector<int>arr){
    int start =0;
    int end = arr.size()-1;
    int i =0;
    while(i!=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else if(arr[i]==1){

            swap(arr[i],arr[end]);
            end--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort01(arr);
    return 0;
} 