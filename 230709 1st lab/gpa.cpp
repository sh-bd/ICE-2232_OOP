#include <iostream>
using namespace std;
int main()
{
    float theory_1, theory_2, theory_3, theory_4, lab_1, lab_2, lab_3;
    float total_credit = 16.5, lab_credit = 1.5, theory_credit = 3;
    cout << "Enter the GPA of 2211 theoretical: ";
    cin >> theory_1;
    cout << "Enter the GPA of 2221 theoretical: ";
    cin >> theory_2;
    cout << "Enter the GPA of 2231 theoretical: ";
    cin >> theory_3;
    cout << "Enter the GPA of 2241 theoretical: ";
    cin >> theory_4;
    cout << "Enter the GPA of 2212 sessional: ";
    cin >> lab_1;
    cout << "Enter the GPA of 2222 sessional: ";
    cin >> lab_2;
    cout << "Enter the GPA of 2232 sessional: ";
    cin >> lab_3;
    float gpa = ((theory_1 * theory_credit) + (theory_2 * theory_credit)
    + (theory_3 * theory_credit) + (theory_4 * theory_credit) + 
    (lab_1 * lab_credit) + (lab_2 * lab_credit) + (lab_3 * lab_credit)) / 
    total_credit;
    cout << endl << "The GPA is " << gpa;
}
