#include<string.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[100];
    //cin keyword - it will read untill it gets null value,space ,tab etc 
    //ex - if I will give i/p as "Shekhar Bhide" then it will read only Shekhar bcoz afer 
    //Shekhar name there is space
  //  cin >> name;


    //with help of this getline function we can take input including space ,tab etc 
    cin.getline(name,100);
    
    cout << "NAMe is " << name << endl;

    return 0;
}