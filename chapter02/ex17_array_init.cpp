#include <iostream>
using namespace std;
int main()
{
    int scores[] = {
        100, 200, 300, 400, 502};

    const int STUDENTS = sizeof(scores) / sizeof(int);

    int sum = 0;
    int i;
    double average;

    for (i = 0; i < STUDENTS; i++)
    {
        sum += scores[i];
    }
    average = (double)sum / STUDENTS; // (double): ĳ���� ������
    cout << "���� ���= " << average << endl;

    return 0;
}