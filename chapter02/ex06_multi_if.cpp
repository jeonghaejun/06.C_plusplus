#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x, y;
    cout << "x���� �Է��ϼ���";
    cin >> x;
    cout << "y���� �Է��ϼ���";
    cin >> y;
    if (x > y)
        cout << "x�� y���� Ů�ϴ�." << endl;
    else if (x < y)
        cout << "x�� y���� �۽��ϴ�." << endl;
    else
        cout << "x�� y�� �����ϴ�." << endl;
    return 0;
}