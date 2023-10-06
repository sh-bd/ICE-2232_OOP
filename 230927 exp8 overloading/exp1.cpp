#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "sum = " << (a + b);
}

void add(double a, double b)
{
    cout << endl
         << "sum = " << (a + b);
}

int main()
{
    int ia, ib;
    double da, db;
    cin >> ia >> ib >> da >> db;
    add(ia, ib);
    add(da, db);
    return 0;
}
