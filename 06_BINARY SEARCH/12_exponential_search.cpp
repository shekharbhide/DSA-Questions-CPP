#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr,int start,int end,int target){
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int exponentialSearch(vector<int>arr,int target){
    if(arr[0] == target) return 0;

    //FINDING SUBARRAY - FINDING PART OF ARRAY TO SEARCH TARGTE
    int i=1;
    while(i < arr.size() && arr[i] <= target){
        i = i * 2;
    }

    int start = i/2;
    int n = arr.size();
    int end = min(i,n-1);
    return binarySearch(arr,start,end,target);


}
int main()
{
    int n; cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target; 
    cout << "Enter Target "; 
    cin >> target;
    int searchEl = exponentialSearch(arr,target);
    cout << "Found at index " <<  searchEl << endl;
    return 0;
}