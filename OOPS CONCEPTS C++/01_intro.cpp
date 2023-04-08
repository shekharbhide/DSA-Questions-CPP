#include <bits/stdc++.h>
using namespace std;
class Animal
{
private:
    int height;

public:
    int age;
    string name;

    void sleep()
    {
        cout << "Sleeping" << endl;
    }
    void eat()
    {
        cout << "Eating " << endl;
    }

    // setter
    void setHeight(int h)
    {
        height = h;
    }
    // getter
    int getHeight()
    {
        return height;
    }
};
int main()
{
    Animal obj;
    obj.age = 20;
    obj.name = "Tomy";
    cout << obj.age << endl;
    cout << obj.name << endl;

    obj.eat();
    obj.sleep();

    cout << endl;
    obj.setHeight(134);
    cout << obj.getHeight();

    return 0;
}