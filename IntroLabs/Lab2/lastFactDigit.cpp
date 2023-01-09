#include <iostream>

using namespace std;

int main() {
    int testcases, num, value; 
    cin >> testcases; // how many N!
    int factorials[testcases]; // list, N! big
    for (int i = 0; i < testcases; i++) { 
        cin >> num;
        value = 1;
        while (num > 0) {
            value = num * value;
            num--;
        }
        factorials[i] = value % 10 ;
        cout << factorials[i] << endl;
    }
    return 0;
}