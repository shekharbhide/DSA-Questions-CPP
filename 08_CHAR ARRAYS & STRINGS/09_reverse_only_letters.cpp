class Solution {
public:
   
    string reverseOnlyLetters(string s) {
        int l = 0;
        int h = s.size()-1;
        while( l <= h){
            if( isalpha(s[l]) && isalpha(s[h]) ){
                swap(s[l++],s[h--]);
            }
            else if( !isalpha(s[l])){
                l++;
            }
            else if( !isalpha(s[h]) ){
                h--;
            }
            else{
                l++;
                h--;
            }


        }
        return s;
    }
};