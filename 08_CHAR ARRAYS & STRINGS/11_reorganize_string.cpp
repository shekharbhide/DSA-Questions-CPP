#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;

    int hash[26]  = {0};
        for(int i=0;i<s.size();i++){
   
            cout <<  "s[i] " << s[i] << endl;
            cout << "hash[s[i]-'a'] " << hash[s[i]-'a'] << endl;
            hash[s[i]-'a']++;
            cout << "hash[str[i]-'a']++ " << hash[s[i]-'a'] << endl;
        }
        cout << endl << endl;
        
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i=0;i<26;i++){
            cout << " max_freq " << max_freq << endl;
             cout << " max_freq_char " << max_freq_char << endl;
            cout << "i= " << i <<"   hash[i] " << hash[i] << endl;
            if(hash[i] > max_freq){
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }
    return 0;
}




/*
class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]  = {0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }

        //find most occurent char
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i] > max_freq){
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }

        int index = 0;
        //placing most occurent char
        while(max_freq > 0 && index < s.size())
        {
            s[index] = max_freq_char;
            max_freq--;
            index = index + 2;
        }

        //agr sare char place nahi huye aur index khtm ho gaya toh return ""
        if(max_freq != 0){
            return "";
        }

        //jo char means max occurent place krdiya roh uska count 0 krdo hash me 
        hash[max_freq_char - 'a'] = 0; //b=98 i.e 98-97=1 i.e at 1th index mark 0
        
        // place rest  characters
        for(int i=0;i<26;i++){
            while(hash[i] > 0){
                if(index >= s.size()){
                    index = 1;
                }
                else{
                    index = index;

                }

                s[index] = i + 'a';
                hash[i]--;
                index = index+2;
            }
        }
        return s;

    }
};
*/