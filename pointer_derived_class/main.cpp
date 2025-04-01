#include <iostream>
using namespace std;

class Base {
    public:
    int var_base;
    void display() {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class Derived : public Base {
    public:
    int var_derived;
    void display() {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main() {
    Base * base_class_pointer;
    Base obj_base;
    base_class_pointer = &obj_base;
    base_class_pointer -> var_base = 34;
    // base_class_pointer -> var_derived = 24; // Not Allowed - throws error
    base_class_pointer -> display();

    Derived * derived_class_pointer;
    Derived obj_derived;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_base = 12;
    derived_class_pointer -> var_derived = 16;
    derived_class_pointer -> display();

    return 0;
}