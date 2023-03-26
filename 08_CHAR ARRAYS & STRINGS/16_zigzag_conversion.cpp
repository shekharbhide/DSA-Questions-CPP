#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
        if(numRows == 1) return s;
        //creating vector of numRows size
        vector<string>zigzag(numRows);

        int i = 0;
        int row = 0;
        bool direction = 1;
        while(true){
            if(direction){ // jb direction = 1 he,
                while(row < numRows && i < s.size()){
                    /* cout << "before push row " << row << endl;
                    cout << "before push s[i] " << s[i] << endl; */
                    zigzag[row++].push_back(s[i++]);
                   
                }
                row = numRows - 2;
            }
            else{
                while(row >=0 && i<s.size()){
                    
                    zigzag[row--].push_back(s[i++]);
                    
                }
                //updatng row 
                row = 1;
            }
            //change direction
            direction = !direction;

            if(i >= s.size())
                break;
        }

        string ans = "";
        for(int i=0;i<zigzag.size();i++){
            ans += zigzag[i];
            cout << zigzag[i] << " "<< endl;
        }
        return ans;
    }


int main()
{
    string s;
    cin >> s;
    int numRows; cin >> numRows;
    cout << convert(s,  numRows); 
    return 0;
}
    