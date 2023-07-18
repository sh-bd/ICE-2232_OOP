#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "The largest number is " << a << endl;
                return 0;
            }
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            if (b > d)
            {
                cout << "The largest number is " << b << endl;
                return 0;
            }
        }
    }
    if (c > a)
    {
        if (c > b)
        {
            if (c > d)
            {
                cout << "The largest number is " << c << endl;
                return 0;
            }
        }
    }
    if (d > a)
    {
        if (d > b)
        {
            if (d > c)
            {
                cout << "The largest number is " << d << endl;
            }
        }
    }
}