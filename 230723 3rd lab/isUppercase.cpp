#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << endl << "Enter the character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "The character is in Uppercase" << endl;
    else if (ch >= 'a' &&ch <= 'z')
        cout << "The character is in Lowercase"<< endl;
}