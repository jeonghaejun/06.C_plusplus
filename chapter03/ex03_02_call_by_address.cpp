#include <iostream>
using namespace std;

int test(int arr[], int len)
{
    // int s = sizeof(arr);
    // cout << "array size : " << s << endl;
    for (int i = 0; i < len; i++)
    {
        cout << i << endl;
    }
    arr[0] = 10;
    return arr[0];
}

int main(int argc, char const *argv[])
{
    int n[] = {1, 2, 3, 6, 7, 8, 8, 9};
    cout << "array size : " << sizeof(n) << endl;
    int m = test(n, 8); //배열이름 배열의 시작주소

    cout << "result : " << n[0] << endl;
    return 0;
}