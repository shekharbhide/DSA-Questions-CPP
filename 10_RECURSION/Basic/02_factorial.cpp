#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    cout << "func call is for " << n << endl;

    //BAse case
    if(n==1) {
        return 1;
    }

    /* int smallPrblm = factorial(n-1);
    int bigPrblmeAns = n * smallPrblm;
    return bigPrblmeAns; */
    return n * factorial(n-1);
}
int main()
{
    int n; cin >> n;
    int ans = factorial(n);
    cout << "Fcatorail of " << n << " is : " << ans;
    return 0;
}