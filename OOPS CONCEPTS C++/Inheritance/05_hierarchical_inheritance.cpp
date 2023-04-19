#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    int price;

public:
    string name;
    void speedUp()
    {
        cout << "Speedign up" << endl;
    }
    void breakit()
    {
        cout << "break to car" << endl;
    }
};

class Scorpio : public Car
{
    string name;
};

class Fortuner : public Car
{
public:
    string name;
    void speedUp()
    {
        cout << "Speedign up.. fortuner..............." << endl;
    }
    void breakit()
    {
        cout << "break to car fortuner" << endl;
    }
};
int main()
{
    Scorpio obj1;
    obj1.speedUp();

    Fortuner obj2;
    obj2.speedUp();

    cout << obj2.name << endl;
    return 0;
}