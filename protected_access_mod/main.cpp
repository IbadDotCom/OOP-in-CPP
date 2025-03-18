#include <iostream>
using namespace std;

class Base {
    protected:
    int a=12;
    private:
    int b;
};

/*
For members:
1. Private: Not Inherited.
2. Protected: Derived public/protected becomes protected, derived private becomes private.
3. Public: Derived public/protected/private remains public/protected/private.
*/

class Derived : protected Base {
    int newA;
    public:
    void setA() {
        a = newA;
    }
    int getA() {
        return a;
    }
};

int main() {
    Derived der;
    cout << der.getA();
    return 0;
}

