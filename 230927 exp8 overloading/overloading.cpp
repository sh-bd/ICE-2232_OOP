#include <iostream>
using namespace std;

float gpa(float a, float b)
{
    float c = 3, d = 1.5;
    float theory = a * c;
    float lab = b * d;
    float gpa = (theory + lab) / (c + d);
    return gpa;
}

int main()
{
    float a, b, c, d;
    cin >> a >> b;
    float student1 = gpa(a, b);
    cout << student1;
    return 0;
}