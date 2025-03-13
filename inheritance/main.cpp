#include <iostream>
using namespace std;

// Base Class
class Employee {
    public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId) {
        id = inpId;
        salary = 34.0;
    }
};

// Derived Class
class Programmer : public Employee {
    public:
    int languageCode;
    Programmer(int inpId) {
        id = inpId;
        languageCode = 9;
    }
    void getData() {
        cout << id << endl;
    }
};

int main () {
    Employee ibad(2), john(3);
    cout << ibad.salary << endl;
    cout << john.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
