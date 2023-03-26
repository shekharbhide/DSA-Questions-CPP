#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ***r,**q,*p,i=8;
    p = &i;
    (*p)++;
    q=&p;
    (**q)++;
    r=&q;
    cout << "*p "<< *p << endl;
    cout << "**q "<< **q << endl;
    cout << "***r "<< ***r << endl;

    return 0;
}