#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr,int s,int e,int target)
{
    int mid = s + (e-s)/2;
    //base case 1 : when arr[mid]==targte
    if(arr[mid]==target){
        return mid;
    }
    //base case 2 : when s becomes > than e
    if(s > e){
        return -1;
    }

    if(arr[mid] < target){ //right search
        //s = mid+1;
        binarySearch(arr,mid+1,e,target);
    }
    else{ //left search
        //e = mid-1;
        binarySearch(arr,mid-1,e,target);
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
    int s = 0;
    int e = arr.size()-1;
    int target; 
    cout << "Enter target "; 
    cin >> target;
    int targetKaIndex =   binarySearch(arr,s,e,target);
    if(targetKaIndex==-1){
        cout << "Not found"<< endl;
    }
    else{
        cout << "FOUND AT " << targetKaIndex << endl;
    }
    return 0;
}