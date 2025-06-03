#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// https://codeforces.com/problemset/problem/1866/A
// Done on 3 June 2025

// Simply find the minimum postive number or largest number (which is < = 0) and then return the least magnitude number.

int main() {
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        arr.push_back(temp);
    }

    vector<int> ans;


    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            ans.push_back(-1 * arr[i]);
        } else {
            ans.push_back(arr[i]);
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans[0];
}
