#include <bits/stdc++.h>
using namespace std;

class Fruit
{
public:
    string name;
};

class Mango : public Fruit
{
public:
    int weight;
};
class Alphanso : public Mango
{
public:
    int sugarLevel;
};
int main()
{
    Alphanso obj;

    cout << obj.name << " " << obj.weight << " " << obj.sugarLevel << endl;
    return 0;
}