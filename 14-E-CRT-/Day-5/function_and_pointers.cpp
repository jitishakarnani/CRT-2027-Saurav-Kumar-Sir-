//Question - write a c++ program that applies 10% discount using reference update the original bill amount

#include <iostream>
using namespace std;

void discount(double &amount){ //call by reference
    amount=amount*0.9;
}

int main(){
    double amount=250.50;
    cout<<"Your amount is :"<< amount<<endl;

discount(amount); //argument
cout<<"Your discounted amount is :" << amount;

}