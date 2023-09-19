#include <iostream>
using namespace std;
class Student
{
public:
    string Name, dept;
    int id, batch;
    float cgpa;
    void study()
    {
        cout << "Hello" << endl;
    }
    void attend_class()
    {
        cout << "Attend class" << endl;
    }
};

int main()
{
    Student std1;
    std1.Name = "Mouno";
    Student std2;
    std2.Name = "Shamim";
    cout << std1.Name << endl;
    cout << std2.Name << endl;

}