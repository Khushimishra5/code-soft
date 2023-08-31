#include <iostream>
#include <conio.h>
using namespace std;
class calculator
{
    int a, b, c, choice;
    public:
    void cal()
    {
        cout << "enter two number";
        cin >> a >> b;
        cout << "enter your choice";
        cin >> choice;
        if (choice == 1) 
        {
            c = a + b;
            cout << "addition" << c<<endl;
        }
        if (choice == 2)
        {
            c = a - b;
            cout << "substraction" << c<<endl;
        }
        if (choice == 3)
        {
            c = a * b;
            cout << "multiplication" << c<<endl;
        }
        if (choice == 4)
        {
            c = a / b;
            cout << "Division" << c<<endl;
        }
        if (choice > 4)
        {

            cout << "Invalid input";
        }
    }
};
int main()
{
    calculator obj;
   obj.cal();

    return 0;
}