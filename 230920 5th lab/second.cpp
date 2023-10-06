#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sqroot, qube, square;
    cout << "Enter the value of n: ";
    cin >> n;
    sqroot = sqrt(n);
    qube = n * n * n;
    square = n * n;
    cout << "Square-root= " << sqroot << "\nQube= " << qube << "\nSquare= " << square << endl;
    return 0;
}