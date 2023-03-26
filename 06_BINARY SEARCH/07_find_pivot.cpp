#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    
    while(start <= end){
        if(arr[mid] > arr[mid+1])
            return mid;
        if(arr[mid-1] > arr[mid])
            return mid-1;
        else if(arr[start] > arr[mid])
            end = mid - 1;
        else if(arr[start] < arr[mid])
            start = mid + 1;

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

    int pivotIndex = findPivot(arr);
    cout << "Index is " << pivotIndex << endl;
    cout << "Value is " << arr[pivotIndex] << endl;
    return 0;
}