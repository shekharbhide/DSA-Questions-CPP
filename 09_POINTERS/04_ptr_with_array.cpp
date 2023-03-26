#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];

    //three will give same ans -> i.e base address
    cout << "arr -> " << arr << endl;
    cout << "&arr -> " << &arr << endl;
    cout << "&arr[0]-> " << &arr[0] << endl; 

    //createing pointer
    int* p = arr;
   // int *ptr = &arr;
    int *np = &arr[0];

    cout << "p -> " << p << endl;
    //cout << "ptr " << ptr << endl;
     cout << "np -> " << np << endl;

    

    return 0;
}