#include <iostream>

using namespace std;
int main() {
    int start0 = 0, start1 = 1, fib = 0;
    for (int i = 1; i <= 19; i++) {
        if (i == 1) {
            fib = start0 + start1;
        }
        if (i % 2 == 0) {
            start0 = fib;
            fib = start0 + start1;
        }
        if (i % 2 != 0 && i != 1) {
            start1 = fib;
            fib = start0 + start1;
        }
        cout << fib << endl;
    }
    return 0;
}
