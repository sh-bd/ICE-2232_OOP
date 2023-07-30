#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the value of n ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
            continue;
        cout << i << "\t";
        if (i == 20)
            break;
    }
    cout << endl;
    return 0;
}