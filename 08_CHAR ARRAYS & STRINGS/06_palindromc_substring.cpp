class Solution {
public:
int expandAroundIndex(string s,int left,int right){
    int count = 0;
    //jb tk i,j same he tb tk count++ and i-- and j++;
    while(left >=0 && right < s.length() && s[left]==s[right]){
        count++;
        left--;
        right++;
    }
    return count;
}
    int countSubstrings(string s) {
        int totalCount = 0;
        
        for(int center=0;center<s.length();center++){
            //ODD WALE lenght
            int oddKaAns = expandAroundIndex(s,center,center);
            totalCount += oddKaAns;

            //EVEN WALE length
            int evenKaAns = expandAroundIndex(s,center,center+1);
            totalCount += evenKaAns;
        }
        return totalCount;
    }
};