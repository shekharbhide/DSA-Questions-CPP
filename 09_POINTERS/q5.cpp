#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 7;
    int *c = &a;
    c = c+1;
    cout << c << endl;
    cout << a << " " << *c << endl;
    return 0;
}