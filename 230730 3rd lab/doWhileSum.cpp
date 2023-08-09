#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    i = 1;
    do {
        sum = sum + i;
        i++;
    } 
    while (i <= n);
    cout << "The sum is " << sum << endl;
    return 0;
}