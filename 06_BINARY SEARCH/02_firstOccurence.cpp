#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//FIRST OCCURENCE OF ELEMENT

int firstOccerence(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if(target < arr[mid]){
            mid = end - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
   return ans;
}
int main()
{
    int n; cin >> n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;  
    cout << "Enter target element ";
    cin >> target;

    int indexOfElement = firstOccerence(arr,n,target);
    if(indexOfElement == -1){
        cout << "Element is Not prsent in the Array"<<endl;
    }
    else{
        cout <<"Element is occurred at first at index " << indexOfElement << endl;
    }

    return 0;
}