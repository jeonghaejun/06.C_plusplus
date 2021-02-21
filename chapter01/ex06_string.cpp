#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1 = "Good";
    string s2 = "Morning";
    string s3 = s1 + " " + s2 + "!";
    cout << s3 << endl;

    string s4 = "Good";
    string s5 = "Bad";
    bool b = (s4 == s5);
    cout << b << endl;

    // string s6 = "Hello" + "World" + s1; 에러
    // cout << "abc" + "def"; 에러
    string s6 = s1 + "Hello" + "World";

    return 0;
}