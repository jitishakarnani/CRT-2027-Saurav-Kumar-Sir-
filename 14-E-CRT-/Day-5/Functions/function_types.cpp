#include <iostream>
using namespace std;

//write a function that takes numbers as an input of coke cans you have to print the total volume of the coke if:
// in each can there is 250 ml coke


// Type 1 - With argument WITH return type
int cokevol(int cans) {
    return cans * 250;
}

// Type 2 - With argument WITHOUT return type
void cokevol_void(int cans) {
    cout << "Total volume: " << cans * 250 << " ml" << endl;
}

int main() {
    int cans;
    cin >> cans;

    // Type 1 usage - function returns value, we print it
    cout << "Total volume: " << cokevol(cans) << " ml" << endl;

    // Type 2 usage - function prints directly, returns nothing
    cokevol_void(cans);

    return 0;
}
/*
OTHER:
 Type 3 - No argument WITH return type
 Type 4 - No argument No return type 
 */

