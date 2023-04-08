#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
public:
    string name;
    int age;
    int rollno;
    // Default Constructor
    Student()
    {
        this->name = "";
        this->rollno = 0;
        this->age = 0;
        cout << "Constructor called" << endl;
    }

    // PARAMETERIZED CONSTRUCTOR
    Student(int age)
    {
        this->age = age;
        cout << "PARAMETERIZED 1 CONSTRUCTOR" << endl;
    }

    Student(string name, int rollno, int age)
    {
        this->name = name;
        this->rollno = rollno;
        this->age = age;
        cout << "PARAMETERIZED (3 paramtert) CONSTRUCTOR" << endl;
    }

    // COPY CONSTRUCTOR
    Student(Student &obj)
    {
        this->name = obj.name;
        this->rollno = obj.rollno;
        this->age = obj.age;
        cout << " COPY CONSTRUCTOR" << endl;
    }
};
int main()
{
    Student *obj = new Student(500);

    Student *obj1 = new Student("Shekhar", 6, 20);
    Student a(20);
    Student b("Shekhar", 6, 20);
    Student s = a;
    Student s1 = b;

    Student s2(s1);
    return 0;
}