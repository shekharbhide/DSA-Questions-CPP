#include<bits/stdc++.h>
using namespace std;

int getLen(char name[]){
    int i=0;
    int len = 0;

    while(name[i] != '\0'){
        len++;
        i++;
    }

    return len;
}
int main()
{
    char name[100];
    cin.getline(name,30); //function to get multiple words i.e sentance

   
    int len = getLen(name);
    for(int i=0;i<len;i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }

    cout << name << endl;

    return 0;
}