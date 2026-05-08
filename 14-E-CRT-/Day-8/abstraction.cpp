#include <iostream>
using namespace std;

class Atm{
    private:
    int pin;
    int balance;

    public:
    Atm(){
        balance = 1000000;
    }

    void withdraw(int amount){
        if( amount > balance ){
            cout<< "Insufficient balance"<<endl;
        }
        else{
            balance -= amount;
            cout<<"Withdrawn:"<<amount<<endl;

        }
    }
    void showbal(){
         cout<<"Remaining balance:"<< balance<< endl;
    }
   
};

int main(){

    Atm a;
    a.withdraw(5000);
    a.showbal();

    return 0;
}