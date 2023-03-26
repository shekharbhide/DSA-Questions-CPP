#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch='a';
    char* ptr = &ch;
    ch++;
    cout << *ptr;
    return 0;
}