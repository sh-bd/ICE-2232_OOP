#include <iostream>
using namespace std;

int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int a, b, sum;
    cin >> a >> b;
    sum = add(a, b);
    cout << "The sum is " << sum;
    return 0;
}