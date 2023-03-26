//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool isPossibleSoln(int arr[],int n,int k,long long mid){
        long long  painterCount = 1;
        long long  boardSum = 0;
        
        for( long long  i=0;i<n;i++){
          //  int checkSum = ;
            if( boardSum + arr[i]  <= mid){
                boardSum += arr[i]; 
            }
            else
            {
                painterCount++;
                if(painterCount > k || arr[i] > mid){
                    return false;
                }
                
                boardSum = arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
       long long sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        long long  ans = 0;
        long long  start = 0;
        long long   end = sum;
        while(start <= end){
             long long  mid = start + (end - start)/2;
            if(isPossibleSoln(arr,n,k,mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends