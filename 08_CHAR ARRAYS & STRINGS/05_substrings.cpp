#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    /* for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            cout << str[j] << " ";
        }
        cout << endl;
        
    } */

    int hash[26]  = {0};
        for(int i=0;i<str.size();i++){
   
            cout <<  "str[i] " << str[i] << endl;
            cout << "hash[str[i]-'a'] " << hash[str[i]-'a'] << endl;
            hash[str[i]-'a']++;
            cout << "hash[str[i]-'a']++ " << hash[str[i]-'a'] << endl;
        }
        cout << endl << endl;
        
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i=0;i<26;i++){
            cout << " max_freq " << max_freq << endl;
            cout << "i= " << i <<"   hash[i] " << hash[i] << endl;
            if(hash[i] > max_freq){
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }
    return 0;
}