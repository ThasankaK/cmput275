#include <iostream>

using namespace std;

int main() {
    int commercials, cost, viewers, counter;
    cin >> commercials >> cost;
    int ratings[commercials];
    for (int i = 0; i < commercials; i++) {
        cin >> viewers;
        ratings[i] = viewers;
    }
    for (int i = 0; i < commercials; i++) {
        counter = ratings[i];
        for (int j = 0; j < commercials; j++) {
            counter = counter + ratings[j]

        }
    }
    cout << ratings << endl;
    return 0;

}