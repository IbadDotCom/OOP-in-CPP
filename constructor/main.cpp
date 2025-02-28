#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // default constructor
    Complex()
    {
        a = b = 10;
        cout << a << " " << b << endl;
    }
    // parameterized constructor
    Complex(int x, int y) {
        cout << x << " + " << y << "i" << endl;
    }
    Complex(int, int, int);
};

Complex :: Complex(int x, int y, int constant) {
    cout << x << " + " << y << "i = " << constant << endl;
}

int main()
{
    // implicit call
    // Complex comp;
    // explicit call
    // Complex complex = Complex();
    // Complex c1 = Complex(2,3);
    Complex c2 = Complex(3,4,7);

    return 0;
}
