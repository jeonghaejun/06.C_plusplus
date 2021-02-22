#include <iostream>
using namespace std;
void f(int i)
{
    cout << "f(int)" << endl;
}
void f(char *p)
{
    cout << "f(char *)" << endl;
}
int main()
{
    // f(NULL); -- int, char * 둘 다 가능하므로 에러
    f(nullptr);
    return 0;
}