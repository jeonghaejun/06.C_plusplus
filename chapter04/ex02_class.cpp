#include <iostream>
#include <string>
using namespace std;
class Circle
{
public:
    int radius;   // ������
    string color; // ����
    double calcArea()
    {
        return 3.14 * radius * radius;
    }
};

void print(Circle p)
{
    cout << "Pizza area: " << p.calcArea() << endl;
}

int main(int argc, char const *argv[])
{
    Circle pizza1, pizza2; // ��ü ����

    pizza1.radius = 100;
    pizza1.color = "yellow";
    cout << "������ ���� " << pizza1.calcArea() << endl;
    print(pizza1); // p = pizza1

    pizza2.radius = 200;
    pizza2.color = "white";
    cout << "������ ���� " << pizza2.calcArea() << endl;
    print(pizza2); // p = pizza2

    Circle pizza3 = pizza1;
    print(pizza3);

    return 0;
}