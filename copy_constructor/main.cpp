#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // Copy Constructor
    // Number(Number &obj)
    // {
    //     cout << "Copy Constructor called!" << endl;
    //     a = obj.a;
    // }

    void printNumber()
    {
        cout << "The Number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y(25);
    x.printNumber();

    Number z(x);    //  Copy Const. invoked
    z.printNumber();

    // z = x            Copy constructor not invoked
    // Number z1 = z    Copy constructor invoked

    Number z1(y);   //  Copy Const. invoked
    z1.printNumber();
    return 0;
}

