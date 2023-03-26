#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout << "a " << a << endl;
    cout << "b " << b << endl;
    return 0;
}