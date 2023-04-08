#include <bits/stdc++.h>
using namespace std;
class Man
{
private:
    int weight;

public:
    // properties
    int age;
    string name;

    // behaviours
    void sleep()
    {
        cout << "Sleeping" << endl;
        cout << this->age << endl;
        cout << this->name << endl;
    }

    void eat()
    {
        cout << "eating" << endl;
    }

    // setter
    void setWeight(int weight)
    {
        this->weight = weight;
    }

    // getter
    int getWeight()
    {
        return weight;
    }

    // set name
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    // DYNAMIC MEMORY

    Man *obj = new Man;

    (*obj).age = 28;
    (*obj).name = "Suresh";
    cout << (*obj).age << endl;

    // Alernate way to acces dynamically
    obj->age = 30;
    obj->name = "Ramesh";

    cout << obj->name << endl;

    obj->eat();
    obj->sleep();
    cout << endl;
    //
    obj->setWeight(40);
    cout << obj->getWeight();

    cout << "\n\n";

    obj->setName("VIJAYKUMAR");
    cout << obj->getName() << endl;

    return 0;
}