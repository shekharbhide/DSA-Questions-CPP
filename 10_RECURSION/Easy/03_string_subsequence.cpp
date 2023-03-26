#include<bits/stdc++.h>
using namespace std;
void stringSubseuence(string s,string output,int i)
{
    //base case
    if(i==s.length()){
        cout << output << endl;
        return;
    }

    else{

        // NOT-TAKE / EXCLUDE
        stringSubseuence(s,output,i+1);

        // TAKE / INCLUDE
        //take means - we've to push current elemens into output string
        output.push_back(s[i]);
        stringSubseuence(s,output,i+1);
        
        
    }
  
}
int main()
{
    string s; cin >> s;
    string output ="";

    int i=0;
    stringSubseuence(s,output,i);
    return 0;
}



// STORING IN VECTOR

/*


#include <iostream>
#include<vector>
using namespace std;

void printSubsequences(string str, int n, string output, int i, vector<string>& v) {
  //base case
  if(i == n ) {
    v.push_back(output);
    return;
  }

  //include
  printSubsequences(str,n, output + str[i], i+1,v);

  //exclude
  printSubsequences(str,n, output, i+1,v);


}

int main() {
  string str = "abcd";
  string output = "";
  vector<string> v;
  int i = 0;
  int n = str.length();
  printSubsequences(str,n, output, i, v);

  cout << "Printing all subsequences " << endl;
  for(auto val: v) {
    cout << val << " " ; 
  }

  cout << endl << "Size of vector is: " << v.size() << endl;

  return 0;
}



*/