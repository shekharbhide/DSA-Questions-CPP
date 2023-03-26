//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
    bool isPossibleSoln(vector<int> &stalls,int k,int mid){
        int cowCount=1;
        int pos = stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            int distance = stalls[i] - pos;
           // cout << "mid " << mid << endl; 
            //cout <<"Distance "<< stalls[i] << "-"  << pos <<" = " <<distance  << endl;
            if(distance >= mid){
                cowCount++;
                pos = stalls[i];
            }
            //cout << "Cow count " << cowCount << endl;
            if(cowCount == k){
                return true;
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int s = 0;
        int e = stalls[stalls.size()-1]-stalls[0];
        int ans = -1;
        
        while(s <= e){
            int mid = s + (e-s)/2;
            
            if(isPossibleSoln(stalls,k,mid)){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends