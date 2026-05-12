#include <iostream>
using namespace std;

// Sum by recursion

int func(int x = 5) { 
    if (x == 1) {         
        return 1;          
    }
    int sum = 0;          
    sum += x + func(x - 1);
    return sum;         
}

// Factorial by recursion

int fac(int n = 5) { 
    if (n == 1 || n == 0) {         
        return 1;          
    }
    int ans = 1;                  
    return n * fac(n - 1);
}

int main() {              
    cout << "Sum: "       << func() << endl; 
    cout << "Factorial: " << fac()  << endl; 
    return 0;
}