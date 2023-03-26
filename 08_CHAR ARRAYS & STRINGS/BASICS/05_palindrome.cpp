#include<bits/stdc++.h>
using namespace std;
int getLength(char name[]){
    int i=0;
    int len;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    return len;
}

bool palindrome(char name[]){
    int s = 0;
    int n = getLength(name);
    int e = n-1;
    while(s <= e){
        if(name[s] != name[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main()
{
    char name[100];

    cin >> name;
    bool check = palindrome(name);
    
    if(check) cout << "palindrome" << endl;
    else cout << "NOT!!!!!!!!!!!" << endl;
    return 0;
}