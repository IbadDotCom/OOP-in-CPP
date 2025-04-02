#include <iostream>
using namespace std;

class IDC {
    protected:
    string title;
    float rating;
    public:
    IDC(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class IDCVideo : public IDC {
    float videolength;
    public:
    IDCVideo(string s, float r, int vl) : IDC(s, r) {
        videolength = vl;
    }
    void display() {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Ratings: " << rating << endl;
        cout << "Video length is " << videolength << " min" << endl;
    }
};

class IDCText : public IDC {
    int words;
    public:
    IDCText(string s, float r, int vc) : IDC(s, r) {
        words = vc;
    }
    void display() {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this tutorial: " << rating << endl;
        cout << "No. of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main() {
    string title;
    float rating, vlen;
    int words;

    title = "JS Tutorial";
    vlen = 5;
    rating = 4.90;
    IDCVideo jsVideo(title, rating, vlen);
    // jsVideo.display();

    title = "JS Text Tutorial";
    words = 470;
    rating = 4.5;
    IDCText jsText(title, rating, words);
    // jsText.display();

    // Calling their respective display function using pointers
    IDC* lectures[2];
    lectures[0] = &jsVideo;
    lectures[1] = &jsText;

    lectures[0] -> display();
    lectures[1] -> display();
    return 0;
}
