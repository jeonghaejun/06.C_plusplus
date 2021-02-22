#include <iostream>
#include <string>
using namespace std;
class SuperClass
{
public:
    void print()
    {
        cout << "SuperClassÀÇ print()" << endl;
    }
};
class ChildClass : public SuperClass
{
public:
    void print()
    {
        SuperClass::print();
        cout << "ChildClassÀÇ print()" << endl;
    }
};

int main(int argc, char const *argv[])
{
    ChildClass c;
    c.print();
    return 0;
}