#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    //taking single word input
    //cin >> str;
    //cout << str << endl;

    //Taking senatance input 
    getline(cin,str);
    cout << str << endl;

    //IN BUILT FUNCTIONS OF STRNGS
    
    // 1. LENGHT
    cout << "Lenght is =>" << str.length() << endl;

    // 2. Check empty
    cout << "IS Empty =>" << str.empty() << endl;

    // push back
    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    // To find a perticular compeonent of string
    //sub string from 0-6
    cout << str.substr(0,6) << endl;

    return 0;
}