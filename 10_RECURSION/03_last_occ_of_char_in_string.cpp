#include<bits/stdc++.h>
using namespace std;

void lastOccOfChar(string &str,char x,int i,int &ans){
    // base case
    if(i == str.size()){
        return;
    }
    //ek case solve
    if(str[i] == x){
        ans = i;
    }
    
    //rec call
    lastOccOfChar(str,x,i+1,ans);
}
int main()
{
    string str;
    cin >> str;

    char x; cin >>x;
    int i=0;
    int ans = -1;

    lastOccOfChar(str,x,i,ans);
    cout << ans;
    return 0;
}