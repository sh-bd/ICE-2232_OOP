#include <iostream>
using namespace std;
class Animal
{
public:
    void bark()
    {
        cout << "This is a dog and is barking!" << endl;
    }
};

class babyDog : public Animal
{
public:
    void cry()
    {
        cout << "A baby dog is barking and crying" << endl;
    }

protected:
    void name()
    {
        cout << "The dog's name is Tommy";
    }

private:
    void address()
    {
        cout << "Lives next to a drain";
    }
};

int main()
{
    Animal dog;
    babyDog bdog;
    dog.bark();
    bdog.cry();
    bdog.name();
    bdog.address();
    return 0;
}
