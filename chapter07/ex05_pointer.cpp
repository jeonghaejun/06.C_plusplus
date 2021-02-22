#include <iostream>
using namespace std;

void print(const char *str)
{
    // str[0] = 'H';   //<- print("world"); 오류 상수를 넘겼는데 하나르 바꾸려고 해서
    cout << str << endl;
}

void print2(string str)
{
    cout << str << endl;
}

int main()
{
    char **p; //이중 포인터..

    char *str1 = "Hello";    // new, delete.... 운용해야해
    char str2[10] = "Hello"; //메모리 낭비 일수도 잇다.

    string str3 = "Hello"; // print(str3)가 안되는거만 해결하면 이게 좋은데...

    print("world");  // char *str = "world"
    print(str1);     // ok
    print(str2);     // ok, 배열명 -> 배열의 시작주소... char *
    print(&str2[0]); // char *
    print(&str2[1]); // char *
    // print(str2[0]); // not ok
    // print(str3); // not ok
    print2(str1); // string str = "Hello" --> ok
    print2(str2); // string str = "Hello" --> ok
    print2(str3); // ok  --> sr3.c_str()--> 아두이노 할때

    // cout << str1 << endl;
    // cout << str2 << endl;
    // cout << str3 << endl;

    return 0;
}