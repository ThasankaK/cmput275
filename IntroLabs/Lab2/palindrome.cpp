#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, wordCount = 0;
    string word, s;
    cin >> n;
    cin.ignore(); // Ignore the newline character after the integer
    while (cin >> s) {
        word += s;
        wordCount++;
        if (wordCount == n) {
            break;
        }
    }
    cout << word << endl;
    return 0;
}