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

void toUpperCase(char name[]){
    int n=getLength(name);

    for(int i=0;i<n;i++){
        name[i] = name[i] - 'A' + 'a';
    }
}
int main()
{
    char name[100];

    cin >> name;

    //cout << "lowercase " << name << endl;
    toUpperCase(name);
    cout <<"Lowercase  " << name << endl;
    return 0;
}