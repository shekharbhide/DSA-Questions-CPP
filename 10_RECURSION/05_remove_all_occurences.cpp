class Solution {
public:
    void removeOcc(string& s,string& part){
        // finding the posn of string part  in s
       int pos = s.find(part);
       if(pos != string::npos){
           //
           string leftPart = s.substr(0,pos);
           string rightPart = s.substr(pos+part.size(),s.size());

           s = leftPart + rightPart;

           // rec cal
           removeOcc(s,part);
       }
       else{
           // string part not found in string s ,ruk jao
           return;
       }
        
    }
    string removeOccurrences(string s, string part) {
       removeOcc(s,part); 
        return s;
    }
};