#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter four zeros: ";
    cin >> a >> b >> c;

    if (a != 0)
    {
        cout << "A isn't zero. Enter the value of A again: ";
        cin >> a;
    }
    else if  (b != 0)
    {
        cout << "B isn't zero. Enter the value of B again: ";
        cin >> b;
    }
    else if (c != 0)
    {
        cout << "C isn't zero. Enter the value of C again: ";
        cin >> c;
    }

    cout << endl << "Congrats! All are zeros." << endl;
}