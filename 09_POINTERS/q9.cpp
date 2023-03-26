#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3,4};

// a++ : we cannot update this ,it will give RUNTIME ERROR
    int *p = a++;
    cout << *p << endl;
    return 0;
}