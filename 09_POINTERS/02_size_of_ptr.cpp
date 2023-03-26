#include<bits/stdc++.h>
using namespace std;

int main()
{
    int val = 10;
    int *ptr = &val;

    char ch = 'A';
    char* cptr = &ch;

    bool chck = true;
    bool* bptr = &chck;

    cout << sizeof(ptr) << endl;
    cout << sizeof(cptr) << endl;
    cout << sizeof(bptr) << endl;

    
    return 0;
}