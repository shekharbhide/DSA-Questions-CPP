#include<bits/stdc++.h>
using namespace std;

int main()
{
     //Hollow Rectangle
    for(int row=0; row<rowCount; row=row+1) {
     //first row or last row -> print 5 *
     if(row == 0  || row == rowCount-1 ){
      for(int col=0; col<colCount; col++) {
             cout << "* ";
         }
     }
     else {
         //remainging middle rows
         //first star
         cout << "* ";
         //spaces
         for(int i=0; i< colCount-2; i=i+1){
             cout << "  ";
        }
        //last star
         cout << "* ";
     }
     cout << endl;
    
   
}
 return 0;

}