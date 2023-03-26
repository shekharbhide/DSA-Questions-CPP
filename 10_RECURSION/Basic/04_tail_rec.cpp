#include<bits/stdc++.h>
using namespace std;

void print(int n){
    //base case 
    if(n==0)
        return;

    cout << n << endl;

    //rec rln
    print(n-1);
}
int main()
{
    int n; cin >> n;
    print(n);
    return 0;
}