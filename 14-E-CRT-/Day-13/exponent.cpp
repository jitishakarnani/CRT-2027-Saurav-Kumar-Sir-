#include <iostream>
using namespace std;

int exp(int n) {
    if (n == 0) return -1;  
    if (n == 1) return 1;

    return (n % 2 == 0 && exp(n/2));
        
}

int main() {
    int n;
    cin >> n;

        cout <<  exp(n) << endl;
       
    return 0;
}