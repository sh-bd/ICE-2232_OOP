#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter the value of n ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "The sum is " << sum << endl;
    return 0;
}