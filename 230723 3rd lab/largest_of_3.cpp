#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3;
    cin >> num_1 >> num_2 >> num_3;

    if (num_1 > num_2)
    {
        if (num_1 > num_3)
        {
            cout << num_1 << " is the largest number" << endl;
        }
    }
    else if (num_2 > num_1)
    {
        if (num_2 > num_3)
        {
            cout << num_2 << " is the largest number" << endl;
        }
    }
    else
    {
        cout << num_3 << " is the largest number" << endl;
    }
}