#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[],int n){
    int el = 0;
    for(int i =0;i<n;i++){
        el = el ^ arr[i];
    }
    return el;
}
int main()
{
    int n; cin >> n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int uniqueEle = findUnique(arr,n);
    cout << uniqueEle << endl;
    return 0;
}