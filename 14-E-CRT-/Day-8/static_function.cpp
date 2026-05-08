#include <iostream>
using namespace std;

class student{
    public:
    static int roll;

    student(){
        roll++;
    }

   static void showRegno(){
        cout<<"Registration No."<<roll<<endl;
    }
};

int student :: roll = 100;

int main(){

    student s1;
    student s2;
    student s3;
    student::showRegno();
    student s4;
    student::showRegno();
    
    return 0;

}

