#include<bits/stdc++.h>
using namespace std;

void missingElements( vector<int>arr)
{
    for(int i=0;i<arr.size();i++){
        int index = abs(arr[i]);
        if(arr[index-1] > 0){
            arr[index-1] *= -1;
        }
    }

   
    for(int i=0;i<arr.size();i++){
       cout << arr[i] << " ";
    }
    cout << endl << endl;

    //find +ve elements
    cout << "Missing elemnts " << endl;
    for(int i=0;i<arr.size();i++){
       if(arr[i] > 0){
        cout << i+1 << " ";
       }
    }
}

int main()
{
    int n; cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    missingElements(arr);
    return 0;
}