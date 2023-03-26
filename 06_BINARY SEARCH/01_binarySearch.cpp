#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            start = mid + 1;
        }
        else if( target < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int n; cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target; 
    cout << "Enter Targt ";
    cin >> target;
    
    int ans = binarySearch(arr,target);
    if(ans==-1){
        cout << "NOT FOUND";
    }
    else{
        cout << "found at index " << ans  << endl;
    }
    return 0;
}