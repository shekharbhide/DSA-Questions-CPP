class Solution {
public:
    string removeOccurrences(string s, string part) {
        //first will find the posn of string 'part' in string 's'
        int pos = s.find(part);

        //jb tk mera posn ek valid index he,yane ki jb tk hamara posn npos(no position ) nahi ho jata tb tk erase kro string part ko from string s
        while( pos != string::npos){
            s.erase(pos,part.length());
            //update the posn
            pos = s.find(part);
            
        } 
        return s;
    }
};