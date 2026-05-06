#include <iostream>
using namespace std;
class students
{
    // Access specifier
public:

    // Data members
    string name;
    int roll_no;

    // Parameterized constructors
    students(int r, string n){
        roll_no=r;
        name=n;
    }

    //Default constructors
     students(){
        roll_no=0;
        name="";
    }

    // Member functions
    void show()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};
int main()
{
    students s1;
    students s2(303, "Janvi"); //for parameterized constructors
    s1.show();
    s2.show();
    return 0;
}