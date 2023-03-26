#include<bits/stdc++.h>
using namespace std;

int ReverseString(char name[]){
    int i=0;
    int Len=0;
    while(name[i] != '\0'){ 
        Len++;
        i++;
    }

    int s = 0;
    int e = Len-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }

}
int main()
{
    char name[100];
    cin >> name;

    cout <<"Befire " << name << endl;
     ReverseString(name);
    cout <<"After " << name << endl;

    return 0;
}