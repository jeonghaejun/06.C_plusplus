#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout << "������ �Ҹ��� ���� ����" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "���� �Ҹ��� ���� ����" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Dog dog;
    dog.speak();
    return 0;
}