#include<bits/stdc++.h>
using namespace std;

void permutationsOfString(string &str,int i){
    // Base Case
    if(i >= str.size()){
        cout  <<  str << endl;
        return;
    }

    // ek case solve krlo
    for(int j=i;j<str.size();j++){
        cout <<  "i="<<i <<"   j="<<j <<  endl;
        cout <<  "str " << str << endl;
        swap(str[i],str[j]);
        permutationsOfString(str,i+1);

        // BACKTRACING
        cout <<  "DOING BT  i="<<i <<"   j="<<j <<  endl;
        
        swap(str[i],str[j]);
        cout <<  "AFTER BT str " << str << endl;
    }
}
int main()
{
    string str;
    cin >> str;
    int i=0;
   
    permutationsOfString(str,i);
    return 0;
}