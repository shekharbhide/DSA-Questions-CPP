class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] ={0};
        bool istCharsMapped[256]={0};

        for(int i=0;i<s.size();i++){
            cout << "BEFORE MAPPING : s[i] -> " << s[i] << endl;
            cout << "BEFORE hash[s[i]] -> " << hash[s[i]] << endl;
            cout << "BEFORE char hash[s[i]] -> " << char(hash[s[i]]) << endl;
            cout << "BEFORE t[i] -> " << t[i] << endl;
            cout << "BEFORE istCharsMapped[t[i]] -> " << istCharsMapped[t[i]] << endl<<endl;


            if( hash[s[i]] ==0 && istCharsMapped[t[i]]==0 ){
                hash[s[i]] = t[i];
                istCharsMapped[t[i]]=true;

                
                cout << "s[i] -> " << s[i] << endl;
            cout << "hash[s[i]] -> " << hash[s[i]] << endl;
            cout << "char hash[s[i]] -> " << char(hash[s[i]]) << endl;
            cout << "t[i] -> " << t[i] << endl;
            cout << "istCharsMapped[t[i]] -> " << istCharsMapped[t[i]] << endl;
            }
        }

        //check isomprmphc
        for(int i=0;i<s.size();i++){
          /*  cout << "s[i] -> " << s[i] << endl;
            cout << "hash[s[i]] -> " << hash[s[i]] << endl;
            cout << "char hash[s[i]] -> " << char(hash[s[i]]) << endl;
            cout << "t[i] -> " << t[i] << endl;
            cout << "istCharsMapped[t[i]] -> " << istCharsMapped[t[i]] << endl;*/
            if(hash[s[i]] != t[i])
                return false;
        }
        return true;
    }
};