#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter the mark: ";
    cin >> mark;
    mark = mark / 10;

    switch (mark)
    {
    case 10:
        cout << "A+" << endl;
        break;
    case 9:
        cout << "A+" << endl;
        break;
    case 8:
        cout << "A+" << endl;
        break;
    case 7:
        cout << "B" << endl;
        break;
    case 6:
        cout << "C" << endl;
        break;
    }
}