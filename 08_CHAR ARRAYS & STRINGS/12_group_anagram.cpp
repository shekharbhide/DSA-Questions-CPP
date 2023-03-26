class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string> > mp;
        //itrate on strs
        for(auto str:strs){
            string s = str;
            cout << "before sort s=" << s << endl;
            sort(s.begin(),s.end());
            cout << "after sort s=" << s << endl; 
            mp[s].push_back(str); 
        }

        vector< vector <string> > ans;
        for(auto it=mp.begin();it!=mp.end();it++){
           // cout << "key "<< it->first <<"value " << it->second << endl;
            ans.push_back(it->second);

        }

        return ans;
    }
};