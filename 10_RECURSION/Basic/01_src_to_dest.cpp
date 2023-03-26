#include<bits/stdc++.h>
using namespace std;
int reach(int src,int dest){
    //base case
    if(src==dest)
     {    cout << "src " << src << endl;
        cout << "dst " << dest << endl;
        return 1;
     }
    else {
        cout << "src " << src << endl;
        cout << "dst " << dest << endl;
        reach(src+1,dest);
    }    
}
int main()
{
    int src = 0;
    int dest = 10;
    cout << reach(src,dest);
    return 0;
}