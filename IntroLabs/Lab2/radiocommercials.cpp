#include <iostream>
#include <climits>

using namespace std;

int main() {
    int commercials, cost = 0, viewers, max_so_far = INT_MIN, max_ending_here = 0;
    cin >> commercials >> cost;
    int ratings[commercials];
    for (int i = 0; i < commercials; i++) {
        cin >> viewers;
        ratings[i] = viewers - cost;
    }
    for (int i = 0; i < commercials; i++) {
        max_ending_here = max_ending_here + ratings[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0; // checks if negative, if so make new max//
        }
        }
    
    cout << max_so_far << endl;
    return 0;
}
