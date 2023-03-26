class Solution {
public:
    void addRE(string& num1,int p1,string& num2,int p2,int carry,string&ans){
        // base cse
        if(p1 < 0 && p2 < 0){
            if(carry != 0){
                //cout << "bc executed "<< endl;
               ans.push_back(carry + '0');
            }
           return;
        }

        // ek case
        int n1,n2;
        if(p1 >= 0)
            n1 = num1[p1]-'0';
        else n1 = 0;

       // cout << "n1 " << n1 << endl;

        if(p2 >= 0) 
            n2 = num2[p2]-'0';
        else n2 = 0;

        //cout << "n2 " << n2 << endl;

        int sum = n1 + n2 + carry;
      //  cout << "sum " << sum << endl;
        int digit = sum % 10;
        //cout << "digit " << digit << endl;
        carry = sum / 10;
        //cout << "carry " << carry << endl;
        
        ans.push_back(digit +  '0');
       
        //cout << "ans string " << ans << endl;
        // rec call
        addRE(num1,p1-1,num2,p2-1,carry,ans);
         
    }
    string addStrings(string num1, string num2) {
        
        int p1 = num1.size()-1;
        int p2 = num2.size()-1;
        int carry = 0;
        string ans = "";
        addRE(num1,p1,num2,p2,carry,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};