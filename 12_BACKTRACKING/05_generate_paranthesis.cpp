//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(string output,int used_open,int used_close,int rem_open,
    int rem_close,vector<string>&ans){
        // bc
        if(rem_open ==0 && rem_close ==0){
            ans.push_back(output);
            return;
        }
        
        // for ( 
        if(rem_open > 0){
            output.push_back('(');
            solve(output,used_open+1,used_close,rem_open-1,rem_close,ans);
            output.pop_back();
        }
        
        //for )
        if(used_open > used_close){
            output.push_back(')');
            solve(output,used_open,used_close+1,rem_open,rem_close-1,ans);
            output.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        int used_open =0;
        int used_close=0;
        int rem_open = n;
        int rem_close = n;
        string output="";
        
        solve(output,used_open,used_close,rem_open,rem_close,ans);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends