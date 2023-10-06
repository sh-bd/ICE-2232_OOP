#include <iostream>
using namespace std;
class Student
{
public:
    string name, dept;
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
    std1.name = "Rahim";
    Student std2;
    std2.name = "Shamim";
    cout << std1.name << endl;
    cout << std2.name << endl;
}