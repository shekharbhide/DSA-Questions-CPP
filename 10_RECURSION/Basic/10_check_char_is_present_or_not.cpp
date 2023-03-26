#include<bits/stdc++.h>
using namespace std;

bool checkChPresent(string s,char ch,int i){
    if(s[i]==ch){
        return true;
    }
    if(s[i]=='\0'){
        return false;
    }
    
    bool ans = checkChPresent(s,ch,i+1);
    return ans;
}
int main()
{
    string s;
    cin >> s;
    char ch;
    cout << "which char  ";
    cin >> ch;

    int n = s.size();
    int i=0;

    bool present = checkChPresent(s,ch,i);
    cout << present << endl;
    if(present) cout << "YES";
    else cout << "NO";
    return 0;
}