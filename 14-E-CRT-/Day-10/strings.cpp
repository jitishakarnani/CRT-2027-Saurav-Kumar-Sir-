#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "Jecrc";
    cout<<str1<<" "<<str2<<endl;

    //METHODS of String

    // 1. Length()
    int n = str1.length();
    cout<< "Length of String is:"<< n<<endl;

    // 2. Append()
    cout<< "After appending String is:"<<str1.append("students");

    // 3. Empty string
    cout<< "IS string Empty?"<< str2.empty()<< endl;

    // 4. Concatenate()
    cout<< "After Concatenation of string 1 :" << str1 + "Bacho" << endl;
    cout<< "After Concatenation of string 2 :" << str1 << endl;

    // 5. push_back()
    str2.push_back('U');
    cout<< "After push_back() method: " <<str2 <<endl; //JecrcU

    // 6. pop_back()
    str2.pop_back();
    cout<< "After pop_back() method: " <<str2 <<endl; //Jecrc

    // 7. find()
    int index = str1.find("ello");
    cout<< "Index of 'ello' in str1:" << index << endl;
    
    // 8. at method.str1[1];

    char ch = str1.at(1);
    cout << "Character at index 1 in str1" << ch << endl;

    //9. swap()
    str1.swap(str2);
    cout<< "After Swapping str1 and str2 : " << endl;
    cout << "str1" << str1 << endl; //Jecrc
     cout << "str2" << str2 << endl; //Hellostudents

    //10. substr()
     string subStr = str2.substr(5,6); // 5 is index and 6 is total length
     cout << "Substring of str2 from index 5 with length 6 :" << subStr <<endl;

     //11. getline()
     string str3;

     //cin >> str3
     getline(cin, str3);
     cout<< "You entered :" << str3 << endl;

     return 0;
}
