#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the value of x and y: ";
    for (int i = 0; i < 1000; i++)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            break;
        }
        else if (x >= 0 && y >= 0)
        {
            cout << "1st coordinate" << endl;
        }
        else if (x < 0 && y >= 0)
        {
            cout << "2nd coordinate" << endl;
        }
        else if (x < 0 && y < 0)
        {
            cout << "3rd coordinate" << endl;
        }
        else if (x >= 0 && y < 0)
        {
            cout << "4th coordinate" << endl;
        }
    }
    return 0;
}