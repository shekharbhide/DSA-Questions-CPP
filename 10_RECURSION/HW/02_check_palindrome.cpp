#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &str,int s,int e){
    // base case
    if(str[s] != str[e]){
        return false;
    }
    if(s > e){ //pura check kr lia
        return true;
    }
    
    return checkPalindrome(str,s+1,e-1);
}
int main()
{
    string str;
    cin >> str;
    int s = 0;
    int e = str.size()-1;
    cout << checkPalindrome(str,s,e);
    return 0;
}