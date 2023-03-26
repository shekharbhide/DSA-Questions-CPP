#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==1){
        //first term is 0
        return 0;
    }
    if(n==2){
        //second term is 1 
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
    //return ans;
}
int main()
{
    int n; 
    cout << "which term u want to see " ;
    cin >> n;
    int ans = fibonacci(n);
    cout << n <<"th term is -> " << ans << endl;
    return 0;
}