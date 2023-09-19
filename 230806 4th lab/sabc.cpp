#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, s, area;
    cout << "Enter the length of three sides: ";
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "\nArea = " << area << endl;
    return 0;
}