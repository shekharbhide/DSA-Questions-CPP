#include<bits/stdc++.h>
using namespace std;

bool isSorted( vector<int> &arr,int& n,int i){
    if(i==n-1){
        return true;
    }
    else
    {
        if(arr[i+1] < arr[i]){
            cout << "this case is false " << arr[i+1] << " < " << arr[i] << endl;
            return false;
        }
        else{
            return isSorted(arr,n,i+1);
        }
    }
}
int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i=0;
    int size = arr.size();
    bool sorted = isSorted(arr,size,i);
    if(sorted) cout << "ARRAY is SORTED"<<endl;
    else cout << "NOT"  <<endl;
    return 0;
}