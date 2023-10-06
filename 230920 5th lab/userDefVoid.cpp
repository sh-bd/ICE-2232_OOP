#include <iostream>
using namespace std;

void add(int x, int y)
{
    int sum = x + y;
    cout << "The sum is " << sum << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    add(a, b);
    return 0;
}