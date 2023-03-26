#include<bits/stdc++.h>
using namespace std;
int sqRoot(int n){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(mid * mid == n)
            ans = mid;

        if(mid * mid > n)
            e = mid - 1;
        else{
            ans = mid;
            s = mid + 1;        
        } 

        mid = s + (e-s)/2;   
    }
    return ans;
    
}
int main()
{
    int n; cin >> n;
    
    int sr = sqRoot(n);
    cout << sr << endl;

    int precision;
    cout << "Enter precision : " ;
    cin >>precision;

    double step = 0.1;
    double finalAns = sr;
    for(int i=0;i<precision;i++){
        for(double j=finalAns;j*j<=n;j=j+step){
            finalAns = j;
        }
        step = step/10;
    }

    cout << "Perfect Square Root " << finalAns << endl;
    return 0;
}