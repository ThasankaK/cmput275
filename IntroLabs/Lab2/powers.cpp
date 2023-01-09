#include <iostream> 
#include <cmath>

using namespace std;

int tothePower(int a, int b) {
    return pow(a, b); 
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << tothePower(a, b) << endl;
    return 0;
}