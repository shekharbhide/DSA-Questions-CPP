
//APPROACH 1 : SIMPLY SORT BOTH STRINGS AND COMPARE WITH EACH OTHER
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       
        if(s==t){
            return true;
        }
        else{
            return false;
        }
           
        

    }
}; 



//APPROACH 2 : COUNTING METHOD (INCRIMENT & DECREMENT)

class Solution {
public:
    bool isAnagram(string s, string t) {
       int freqTable[256]={0};

       for(int i=0;i<s.size();i++){
           freqTable[s[i]]++;
       }
       //iterate on t string
       for(int i=0;i<t.size();i++){
           freqTable[t[i]]--;
       }

       //check in frequqncy table
       for(int i=0;i<256;i++){
           if(freqTable[i] != 0)
                return false;
       }

       return true;
        

    }
};
