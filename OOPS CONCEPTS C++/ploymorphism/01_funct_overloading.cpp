#include <bits/stdc++.h>
using namespace std;
class Maths
{
public:
    int sum(int a, int b)
    {
        cout << "first signature" << endl;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        cout << "second signature" << endl;
        return a + b + 100;
    }
    int sum(int a, float b)
    {
        cout << "third signature" << endl;
        return a + b;
    }
};
int main()
{
    Maths obj;
    cout << obj.sum(2, 5) << endl;
    cout << obj.sum(2, 5, 5) << endl;
    cout << obj.sum(2, 5.5f) << endl;

    return 0;
}