#include<bits/stdc++.h>
using namespace std;

void printDigits(int n){
    //Base case
    if(n==0){
        //ruk jaoo
        return;
    }
    else
    {
        
        //baki recn smbhal lega
        cout << "rec call for " << n << endl;
        printDigits(n/10);

        //ek case solve krlo
        int lastDigit = n%10;
        cout << lastDigit << endl;
    }
}
int main()
{
    int n; cin >> n;

    printDigits(n);
    return 0;
}