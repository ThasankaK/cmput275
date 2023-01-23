#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size = 0, flag = 0;
    char c;
    vector<char> inputStr;
    while (cin >> c) {
        inputStr.push_back(c); // have to use pushback as I did not give vector a size yet
        size++;
    }
    for (int i = 0; i < size; i++) {
        if (inputStr.at(i) != inputStr.at(size-i-1)){ // now i can use .at(), vector has a size
            flag = 1;    
            }
    }
    if (flag) {
        cout << "Not a Palindrome" << endl;
    }
    else {
        cout << "Palindrome" << endl;
    }
    return 0;
}
