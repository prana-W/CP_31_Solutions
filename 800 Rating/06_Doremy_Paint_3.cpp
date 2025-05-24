#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://codeforces.com/problemset/problem/1890/A
// Done on 25 May 2025

/*

Final array: x y x y x y ....
Here x+y=y+x=...

Therefore, our final concept is that:
1. there must be at max two distinct numbers
2. If even number of integers (n), then both quantity of both the numbers (if distinct) should be equal (n/2, n/2)
3. If odd number of integers (n), then one integer should have a quantity of n/2 and the other will have n/2+1

Any array following the above three conditions will satisfy the condition for good array.

*/

int main()
{

    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++)
    {
        int n;
        cin >> n;

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());

        int s = 0;
        int e = n - 1;

        // Using two pointer approach
        while (s < e)
        {
            while (arr[s] == arr[s + 1] && s < n - 2)
                s++;
            while (arr[e] == arr[e - 1] && e > 0)
                e--;

            // It means all intetegers are equal, in such a case the array will always be good
            if (s == n - 1 || e == 0)
            {
                cout << "Yes" << endl;
                break;
            }

            // If s and e become adjacent, it means there are two distinct integers
            else if (e - s == 1)
            {
                int n1 = s + 1; // n1 is the number of first integer
                int n2 = n - e; // n2 is the number of second integer

                if (n1 == n2 || n1 - n2 == 1 || n2 - n1 == 1)
                {
                    cout << "Yes" << endl;
                    break;
                }

                else
                {
                    cout << "No" << endl;
                    break;
                }
            }

            else
            {
                cout << "No" << endl;
                break;
            }
        }
    }
}