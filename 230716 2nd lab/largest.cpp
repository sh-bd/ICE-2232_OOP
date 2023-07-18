#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three ints: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "The largest int is " << a;
        return 0;
    }
    else if (b > a && b > c)
    {
        cout << "The largest number is " << b;
        return 0;
    }
    else
    {
        cout << "The largest number is " << c;
        return 0;
    }
}