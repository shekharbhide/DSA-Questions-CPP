#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    int name;
    int price;

public:
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
};
int main()
{

    return 0;
}