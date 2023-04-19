#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    int age;
    string type;
    int weight;
    // destructor called using ~ operator
    ~Animal()
    {
        cout << "Desrtuctor called" << endl;
    }
};
int main()
{
    // static
    cout << " object creation  obj" << endl;
    Animal obj;
    obj.age = 10;
    obj.type = "cat";
    obj.weight = 56;

    // dynamic memory allocn
    cout << " object creation  obj1" << endl;
    Animal *obj1 = new Animal();
    obj1->age = 20;
    obj1->type = "dog";
    obj1->weight = 40;

    // deleting memory manually i.e distructor
    delete obj1;

    return 0;
}