#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int physics;
    int chemistry;
    // constructor
    A()
    {
        physics = 20;
        chemistry = 300;
    }
};

class B
{
public:
    int chemistry;
    // constructor
    B()
    {
        chemistry = 50;
    }
};

class C : public A, public B
{
public:
    int math;
    C()
    {
        math = 100;
    }
};

int main()
{
    C obj;
    //  cout << obj.chemistry << " " << obj.physics << " " << obj.math;
    // scope resolution ::
    cout << "Accesing A ka chemstry " << obj.A ::chemistry << endl;
    cout << "Accesing B ka chemistry " << obj.B ::chemistry << endl;

    return 0;
}