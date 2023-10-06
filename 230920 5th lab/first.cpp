#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, mul = 1, i;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        mul = mul * i;
    }
    cout << "Sum = " << sum << " and multiplication = " << mul << endl;
    return 0;
}