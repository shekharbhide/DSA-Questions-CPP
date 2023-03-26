#include<bits/stdc++.h>
using namespace std;
void pairSum(vector<int>arr,int targetSum){
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=i+1;j<arr.size();j++){
           // cout <<"("<<element<<","<<arr[j]<<")"<<endl;
           int sum = element+arr[j];
            if(sum == targetSum){
                cout << "("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    cout << "NO PAIR SUM AVAILABLE"<<endl;
}
int main()
{
    int n; cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int targetSum; 
    cout << "Enter target sum "<<endl;
    cin >> targetSum;
    pairSum(arr,targetSum);
    return 0;
}