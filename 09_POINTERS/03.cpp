#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr;
    //BAD PRACTICE : WE'RE TRYING TO ACCESS MEMORY WHICH IS NOT OUR 
    cout << *ptr << endl;

    // Good pratcice to create null ptr
    int *nptr = nullptr;
    //OR
    int *tptr = 0;
    
    cout << nptr << endl;



    return 0;
}