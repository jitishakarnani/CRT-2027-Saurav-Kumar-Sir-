#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = "Jecrc";
    cout << str1 << " " << str2 << endl;

    // ── String Methods ──

    // 1. length() — returns number of characters
    int n = str1.length();
    cout << "Length of string is: " << n << endl;

    // 2. append() — adds to the end of the string
    str1.append(" Students");
    cout << "After append(): " << str1 << endl;

    // 3. empty() — checks if string has no characters
    cout << "Is string empty? : " << str2.empty() << endl;

    // 4. + operator — creates a new concatenated string (original unchanged)
    cout << "Concatenation (temp): " << str1 + " Bacho" << endl;
    cout << "str1 unchanged:       " << str1 << endl;

    // 5. push_back() — appends a single character at the end
    str2.push_back('U');
    cout << "After push_back('U'): " << str2 << endl;   // JecrcU

    // 6. pop_back() — removes the last character
    str2.pop_back();
    cout << "After pop_back():     " << str2 << endl;   // Jecrc

    // 7. find() — returns starting index of a substring
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1: " << index << endl;

    // 8. at() — returns character at a given index
    char ch = str1.at(1);
    cout << "Character at index 1 in str1: " << ch << endl;

    // 9. swap() — exchanges contents of two strings
    str1.swap(str2);
    cout << "After swap():" << endl;
    cout << "  str1: " << str1 << endl;   // Jecrc
    cout << "  str2: " << str2 << endl;   // Hellostudents

    // 10. substr(pos, len) — extracts a portion of the string
    string subStr = str2.substr(5, 6);    // start at index 5, take 6 chars
    cout << "substr(5, 6) of str2: " << subStr << endl;

    // 11. getline() — reads a full line including spaces
    string str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;

    return 0;
}