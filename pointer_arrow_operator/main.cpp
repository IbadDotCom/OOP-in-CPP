#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;
    public:
    void get_data() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void set_data(int a, int b) {
        real = a;
        imaginary = b;
    }
};

int main() {
    Complex c1;
    Complex *ptr = &c1; // Access object's public members using pointers. And object can also be created with just one-liner; 
    // Complex *ptr = new Complex

    (*ptr).set_data(1, 5);
    // ptr -> set_data(1, 5);
    (*ptr).get_data();
    // ptr -> get_data();

    return 0;
}
