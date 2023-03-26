uu#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(log N), as Binary Search algorithm is used.
 //Auxiliary Space: O(1), since no extra space has been used.

int divide(int dividend,int divisor){
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start)/2;
    
    int ans=0;
    while(start <= end){
        if(abs(mid * divisor) == abs(dividend)){
            ans = mid;
        }

        //agr mid*divisor bada ho jaye dividend se to left me search krenge 
        else if(abs(mid * divisor) > abs(dividend)){
            end = mid - 1;
        }
        //agr mid*divisor chhota ho jaye dividend se to ans ko store kara
        // lenge aur right me search krenge 
        else if(abs(mid * divisor) < abs(dividend)){
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    
    if((divisor<0 && dividend<0) || (divisor > 0 && dividend>0)){
        return ans;
    }
    else{
        return -ans;
    }
}
int main()
{
    int dividend;
    cin >> dividend;
    int divisor; cin >> divisor;

    cout << "ANs is " << divide(dividend,divisor);
    return 0;
}