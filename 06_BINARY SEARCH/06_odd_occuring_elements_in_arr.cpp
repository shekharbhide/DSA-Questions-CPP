#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>arr){
    int s =0 ;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(s==e){
            return mid;
        }
        //TO HANDEL EVEN INDEX
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            //TO HANDLE ODD WALE INDEX
            if(arr[mid]==arr[mid-1]){
                s = mid + 1;
            }
            else{
                e = mid -1 ;
            }
        }

        mid = s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int n;  cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Found at index " << solve(arr)<< endl;
    cout << "Element is => " << arr[solve(arr)] << endl;

    return 0;
}