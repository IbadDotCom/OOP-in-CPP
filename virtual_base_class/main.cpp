#include <iostream>
using namespace std;

/*
Student --> Test
Student --> Sports
Test --> Result
Sports --> Result
*/

class Student {
    protected:
    int roll_no;
    public:
    void set_number(int a) {
        roll_no = a;
    }
    void print_number(void) {
        cout << "Your roll no. is " << roll_no << endl;
    }
};

class Test : virtual public Student {
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }

    void print_marks(void) {
        cout << "Your result is here: " << endl
            << "Maths: " << maths << endl
            << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student {
    protected:
    float score;
    public:
    void set_score(float sc) {
        score = sc;
    }
    void print_score(void) {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports {
    float total;
    public:
    void display(void) {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

// Now the roll number that was flowing down from Student to Result twice through Test & Sports is now flowing once by using virtual base class.
int main() {
    Result ibad;
    ibad.set_number(4105);
    ibad.set_marks(82.6, 77.9);
    ibad.set_score(75);
    ibad.display();
    return 0;
}
