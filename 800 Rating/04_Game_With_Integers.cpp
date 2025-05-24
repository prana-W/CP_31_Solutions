#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/1899/A
// Done on 24 May 2025

int main () {

    int testCases;
    cin >> testCases;

    // if multiple of 3, then player1 has to increase or decrease, making the resultant a non-multiple of 3, which the other player reverts back and makes it the multiple of 3 and again the player1 needs to do +1 or -1, making the number non-multiple of 3, hence making the game go forever (more than 10 times). Hence player 2 wins in that case. In a non-multiple of 3, player 1 can either go +1 or -1 resulting in a multiple of 3

    for (int t = 1; t <= testCases; t++) {
        int n; 
        cin >> n;

        if (n%3 == 0) cout << "Second" << endl;
        else cout << "First" << endl;
    }

}