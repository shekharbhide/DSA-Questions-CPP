#include<bits/stdc++.h>
using namespace std;

int  solve(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid= s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid]<arr[mid+1]==target){
            return mid+1;
        }
        else if(target > arr[mid]){
            s = mid + 2; // why mid + 2, bcoz we've alrady checked mid+1 above
        }
        else if(target < arr[mid]){
            e = mid - 2; // why mid - 2, bcoz we've alrady checked mid-1 above
        }
        mid = s + (e-s)/2;
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
    int target; cin >> target;
    cout << "Found at index-" <<solve(arr,target) << endl;
    return 0;
}