#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://codeforces.com/problemset/problem/1896/A
// Done on 25 May 2025

//! Note: In question, i is based on 1-based indexing

// Here the first element needs to be the minimum, else if it is not, the first number will never be able to move in the right side (as operation can't be done in it, as i must be >= 2 (fo 1 indexed) or i >= 1 (for 0 based indexing))
// Hence, if first number is minimum (here 1), then the rest number will automatically be sorted one by one in the right. First the max number will be sorted to correct position (as it will be always max than its surrounding), then the second largest number will be sorted to its correct postion and so on. 
// Therefore, key concept was that only the first number needs to be the minimmum (or 1 in this case)

int main()
{

    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n;
        cin >> n;

        vector<int>arr;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;

            arr.push_back(temp);
        }

        if (arr[0] ==1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}