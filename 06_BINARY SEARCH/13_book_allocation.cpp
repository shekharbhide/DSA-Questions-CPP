
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossibleSoln(int A[],int N,int M,int mid){
        int studentCount = 0;
        int pageSum = 0;
        
        for(int i=0;i<N;i++){
            int checkSum = pageSum + A[i];
            if(checkSum <= mid){
                pageSum += A[i]; 
            }
            else
            {
                //ALLOCATE TO NEXT STUDENTS
                studentCount++;
                if(studentCount >= M || A[i] > mid){
                    return false;
                }
                pageSum = A[i];
            }
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N) return -1;
        //FINDING TOTAL SUM OF PAGES
         int sum = 0;
        for(int i=0;i<N;i++){
            sum += A[i];
        }
       
        int start = 0;
        int end = sum;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(isPossibleSoln(A,N,M,mid)){
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

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends