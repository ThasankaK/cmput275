#include <iostream>

using namespace std;
long long sumfinder(long long inputnum) {
    long long sum = 0;
    while (inputnum >= 1) {
        sum = sum + (inputnum % 10);
        inputnum = inputnum/10;
        }
    return sum;
}
int main() {
    long long inputnum, divisor;
    cin >> inputnum;
    divisor = sumfinder(inputnum);
    while (inputnum % divisor != 0) {
        inputnum++;
        divisor = sumfinder(inputnum);
    }
    cout << inputnum << endl;
    return 0;
}