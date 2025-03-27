#include <iostream>
using namespace std;

class Base {
    int a;
    int b;
    public: 
    // Base(int i, int j) : a(i), b(j) Work
    // Base(int i, int j) : a(i), b(i + j) Work
    // Base(int i, int j) : b(j), a(i+b) Not Work, throws garbage value for a because a is initialized first...
    Base(int i, int j) : a(i), b(a + j) // Work
    {
        cout << "Value of a & b are " << a << " & " << b << endl;
    }
};

int main() {
    Base b(2,4);
    return 0;
}
