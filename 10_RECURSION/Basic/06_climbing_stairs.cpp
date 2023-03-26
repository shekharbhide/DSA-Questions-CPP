// TOTAL NO OF WAYS TO REACH - WE CAN TAK EITHER 1 STEP OR 2 STEPS

#include<bits/stdc++.h>
using namespace std;
int climbingStairs(int n){
    // BASE CASE 
    if(n==0 || n==1){
        return 1;
    }

    return climbingStairs(n-1)+climbingStairs(n-2);
}
int main()
{
    int n; cin >> n;
    int ans = climbingStairs(n);
    cout << "No. of ways to reach "<<n<<"th stair -> "<<ans;
    return 0;
}