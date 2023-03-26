#include<bits/stdc++.h>
using namespace std;


void sort012(vector<int>arr){
    
   /*  //1st approch
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    } */

   /*  //2nd approcha
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }
    
    int i=0;
    while(count0--){
        arr[i]=0;
        i++;
    }
    while(count1--){
        arr[i]=1;
        i++;
    }
    while(count2--){
        arr[i]=2;
        i++;
    }
    
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    } */

    int s = 0;
    int e = arr.size()-1;
    int mid = 0;

    while(mid <= e){
        if(arr[mid]==0){
            swap(arr[s++],arr[mid++]);
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[e--]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int n; cin >>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort012(arr);
    return 0;
}