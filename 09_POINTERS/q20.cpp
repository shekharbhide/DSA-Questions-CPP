#include<bits/stdc++.h>
using namespace std;

void square(int *p)
{
    int a = 15;
    p=&a;
    *p = (*p) * (*p);
    cout << a << endl;
}
int main()
{
    int a = 10;
    square(&a);
    cout <<  a  << endl;
    return 0;
}