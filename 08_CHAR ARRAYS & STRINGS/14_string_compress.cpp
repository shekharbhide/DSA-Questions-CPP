class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        char prev = chars[0];
        int count = 1;
        
        for(int i=1;i<chars.size();i++){
            if(chars[i] == prev){
                count++;
            }
            else{
                chars[index] = prev;
                index++;
                if(count > 1){
                    int start = index;
                    while(count > 0){
                        chars[index++] = (count % 10) + '0';
                        count = count / 10;
                    }
                    reverse(chars.begin()+start,chars.begin()+index);
                }
                // updtae previous 
                prev = chars[i];
                //reset count
                count = 1;
            }
        }

        chars[index]=prev;
        index++;
        if(count > 1){
            int start = index;
           while(count > 0){
                chars[index++] = (count % 10) + '0';
                count = count / 10;
            }
            reverse(chars.begin()+start,chars.begin()+index);
        }

        return index;
    }
};