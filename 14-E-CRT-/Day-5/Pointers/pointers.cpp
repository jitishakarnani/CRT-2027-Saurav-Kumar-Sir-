#include <iostream>
using namespace std;

int main(){
    int a=5;
int*ptr=&a;

 //shows change of value
cout<<*ptr<<endl; //value
cout<<ptr<<endl; //address
*ptr=8;
cout<<*ptr<<endl; 
cout<<a<<endl; //value changed

return 0;
}

//Hence pointer stores address of another variable (Pointers take 8 bytes and int takes 4 bytes)