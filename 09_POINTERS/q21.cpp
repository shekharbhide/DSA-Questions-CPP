#include<bits/stdc++.h>
using namespace std;
void Q(int z){
    z += z;
    cout << "Q function z vlalue " << z << endl;
}
void P(int *y){
    int x = *y + 2;
    Q(x);
    *y = x-1;
    cout << "P function x vlaue " << x << endl;
}
int main()
{
    int x = 5;
    P(&x);
    cout <<"Main function x value "<< x << endl;
    return 0;
}