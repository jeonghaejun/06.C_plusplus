#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (auto &e : v)
    {
        cout << e << ' ';
    }
    cout << endl;
    return 0;
}