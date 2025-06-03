#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1858/A
// Done on 3 June 2025

// To play optimally, both players need to press the common button first, as there own button will only be able to be pressed by them, so do that later and dominate in the beginning.
// Then if the number of common buttons is even and all buttons are pressed, then it appears as the came hassn't started as the turn is back to player1, then simply whoever has more own buttons wins. 
// Id the number of common buttons is odd, then the player2 has to press his own button, to give the turn back to player1 (that is initial state). Now, maximum of a and b-1 will be the winner. (b-1, since one button utilised to return the game back to the initial state).

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (c&1) {
            if (a > b-1) cout << "First" << endl;
            else cout << "Second" << endl;
        } else {
            if (a > b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }
}
