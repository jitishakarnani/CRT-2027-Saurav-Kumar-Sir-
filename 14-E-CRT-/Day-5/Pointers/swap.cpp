// write a program to swap two numbers using pointers

#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1; 
    *ptr1 = *ptr2;    
    *ptr2 = temp;     
}

int main() {
    int a = 5;
    int b = 7;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swap(&a, &b);

    cout << "After swap:  a = " << a << ", b = " << b << endl;

    return 0;
}
