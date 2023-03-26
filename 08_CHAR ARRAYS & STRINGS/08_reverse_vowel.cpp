class Solution {
public:
    bool isVowel(char ch){
       // ch = ch - 'A' + 'a';
      return ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O'  || ch=='U';
    }
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size()-1;

        while(start <= end){
            if(isVowel(s[start]) && isVowel(s[end])){
               // cout << "Before swaping ->  " <<"index-> "<<"start ->"<<start <<" end ->"<< end <<"  "<< s << endl;
                swap(s[start++],s[end--]);
                //cout << "After swaping ->  " <<"index-> "<<"start ->"<<start <<" end ->"<< end <<"  "<< s <<endl;
            }
            else if(isVowel(s[start])==0){
                //cout <<"before start++ "<<"start Index -> "<<start << " "<<  s << endl;
                start++;
                //cout <<"1st case after s++ "<<"start Index -> "<<start << " "<<  s << endl;
            }
            else{
               //cout <<"before e-- "<<"end Index -> "<< end << " " << s << endl;
                end--;
                //cout <<"after e-- "<<"end Index -> "<< end << " " << s << endl;
            }
        }

        return s;
       // int i=0;  //a, e, i, o, and u
/*        while(start <= end){
            if( ( s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u') && ( s[end]=='a' || s[end]=='e' || s[end]=='i' || s[end]=='o' || s[end]=='u')  ){
                 cout << "Before swaping ->  " <<"index-> "<<"start ->"<<start <<" end ->"<< end <<"  "<< s << endl;
                swap(s[start++],s[end--]);
                
                cout << "3rd case - swaping ->  " <<"index-> "<<"start ->"<<start <<" end ->"<< end <<"  "<< s << endl;
            }
           
           else if(s[start]!='a' || s[start]!='e' || s[start]!='i' 
            || s[start]!='o' || s[start]!='u'){
                cout <<"before s++ "<<"start Index -> "<<start << " "<<  s << endl;
                start++;
                cout <<"1st case after s++ "<<"start Index -> "<<start << " "<<  s << endl;
            }
           
           else  if(s[end]!='a' || s[end]!='e' || s[end]!='i' 
            || s[end]!='o' || s[end]!='u'){
                cout <<"before e-- "<<"end Index -> "<< end << " " << s << endl;
                end--;
                cout <<"after e-- "<<"end Index -> "<< end << " " << s << endl;
            }

           
        }*/
       
    }
};