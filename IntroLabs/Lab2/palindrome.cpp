#include <iostream>

using namespace std;

int main() {
    int n, i = 0, flag = 0;
    cin >> n;
    char word[n], x;
    while (cin >> x){
        word[i] = x;
        i++;
    }

    for (int i = 0; i < n; i++){
        if (word[i] != word[n-i-1]) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        cout << "Not A Palindrome" << endl;
    }
    else {
        cout << "Palindrome" << endl;
    }
    return 0;
}
