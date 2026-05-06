// Student Management System

#include <iostream>
using namespace std;

class students {
public:
    int roll_no, CRT;
    long long mobile;      
    string name, email, batch;

    // Default constructor
    students() {
        roll_no = 0;
        mobile = 0;
        CRT = 0;
        name = "Your Name Please";
        email = "";
        batch = "";
    }

    // Parameterized constructor
    students(int r, string n) {
        roll_no = r;
        name = n;
        mobile = 0;         
        CRT = 0;
        email = "";
        batch = "";
    }

    void show() {
        cout << "Name: "      << name    << endl;
        cout << "Roll No: "   << roll_no << endl;
        cout << "Email: "     << email   << endl;
        cout << "Mobile: "    << mobile  << endl;
        cout << "CRT Class: " << CRT     << endl;
        cout << "Batch: "     << batch   << endl;
    }
};

int main() {

    // s1 using default constructor
    students s1;
    s1.show();

    // s2 using parameterized constructor
    students s2(18, "Janvi");
    s2.show();

    s2.email  = "janvi@gmail.com";
    s2.CRT = 402;
    s2.mobile = 9876543210;
    s2.batch  = "A";
    s2.show();  

    return 0;
}