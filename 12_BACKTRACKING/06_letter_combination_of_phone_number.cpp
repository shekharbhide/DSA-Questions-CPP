#include<bits/stdc++.h>
using namespace std;
 void solve(string digits,int index,string output,vector<string>&mapping,vector<string>& ans){
        // BASE CASE
        if(index >= digits.size()){
            ans.push_back(output);
            return;
        }

        // solving 1 cse
        int digit = digits[index]-'0';
        string value = mapping[digit];
        for(int i=0;i<value.size();i++){
            cout << "index " << index << endl;
            cout << "taking values i= " << i << ", output "<<output << endl;
            
            char ch=value[i];
            output.push_back(ch);
            solve(digits,index+1,output,mapping,ans);

           cout << "backtracking index " << index << endl;
           cout << "backtracking i= " << i << ", output "<<output << endl;
            
           output.pop_back();
        }

    }
    void letterCombinations(string digits) {
       vector<string>ans;
       string output="";
       if(digits.size()==0){
           cout << "";
       }
       vector<string>mapping(10);
       mapping[2]="abc";
       mapping[3]="def";
       mapping[4]="ghi";
       mapping[5]="jkl";
       mapping[6]="mno";
       mapping[7]="pqrs";
       mapping[8]="tuv";
       mapping[9]="wxyz";
        int index=0;
       solve(digits,index,output,mapping,ans);
       
       for(auto word:ans){
        cout << word   << endl;
       }
       return;
    
}
int main()
{

    string digits; cin >> digits;
 letterCombinations(digits);
    return 0;
}