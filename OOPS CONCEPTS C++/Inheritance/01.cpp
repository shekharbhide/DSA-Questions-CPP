#include <bits/stdc++.h>
using namespace std;

class Animal
{

protected:
    int age;
    int weight;
};

class Dog : private Animal
{

public:
    void print()
    {
        cout << "Inside dog class" << endl;
        cout << "Inside dog class" << endl;
    }
    void write()
    {
        cout << "Inside dog class" << endl;
        cout << "Inside dog class" << endl;
    }
};

int main()
{
    Dog d1;
    // d1.age = 10;
    // cout << d1.age << endl;
    d1.print();

    return 0;
}