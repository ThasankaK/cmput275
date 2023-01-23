#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> inputStr;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        cout << c << endl;
        inputStr.push_back(c);
    }
    for (int i = n-1; i >= n; i--) {
        cout << inputStr[i];

    }
    return 0;
}