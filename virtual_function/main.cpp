#include <iostream>
using namespace std;

class Base {
    public:
    int var_base=1;
    virtual void display() {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class Derived : public Base {
    public:
    int var_derived=2;
    void display() {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main() {
    Base * base_class_pointer;
    Base obj_base;

    Derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer -> display(); // base class pointer points to derived object but it is still showing display() of Base class. For overcome this, we will make Base class display function 'virtual'..
    // Now line 27 will call Derived class display.
    // This is called runtime polymorphism.
    
    return 0;
}
