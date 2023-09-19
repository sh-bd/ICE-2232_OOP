#include <iostream>
using namespace std;
class Fruit
{
public:
    string Name, color;
    void display()
    {
        cout << Name << " is " << color << endl;
    }
};

int main()
{
    Fruit frt1;
    frt1.Name = "Apple";
    frt1.color = "Green";
    frt1.display();

    Fruit frt2;
    frt2.Name = "Dragon Fruit";
    frt2.color = "Dark Red";
    frt2.display();
    return 0;
}