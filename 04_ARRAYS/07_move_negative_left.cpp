#include<bits/stdc++.h>
using namespace std;

void moveNegToLeft(vector<int>arr){
  //  sort(arr.begin(),arr.end()); //tc - O(nLogn)

    //optimized
    int s=0;
    int e=arr.size()-1;

    while(s <= e){
        if(arr[s] < 0){
            s++;
        }
        else if(arr[e] > 0){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i]<< " ";
    }
}
int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    moveNegToLeft(arr);
    return 0;
}