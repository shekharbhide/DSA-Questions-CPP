#include<bits/stdc++.h>
using namespace std;
int getLength(char name[]){
    int count = 0;
    int i=0;
    while(name[i] != '\0'){ 
        count++;
        i++;
    }
    return count;
}
int main()
{
    char name[100];
    cin >> name;

    cout << "Lenght of string " << getLength(name) << endl;
    cout << strlen(name);
    return 0;
}