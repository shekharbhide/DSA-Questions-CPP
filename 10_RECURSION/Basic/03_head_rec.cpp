#include<bits/stdc++.h>
using namespace std;

void print(int n){
    //base case 
    if(n==0)
        return;

    cout << "before rec call " << n << " "<< endl;    
    //REcursive reln
    print(n-1);
     
    //proceesing wala part
    cout << n << " "<<endl;



}
int main()
{
    int n; cin >> n;
    print(n);
    return 0;
}