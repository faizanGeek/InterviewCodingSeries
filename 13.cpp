// [[[Q13 -Squaring a Sorted Array ]]]

// Problem Statement #
// Given a sorted array, create a new array containing squares of all the number of the input array in the sorted order.
// Time complexity should be o(N)

// Example 1:

// Input: [-2, -1, 0, 2, 3]
// Output: [0, 1, 4, 4, 9]

//ByFaizanAli
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define umi unordered_map<ll, ll>
int main()
{
    int n, i, j;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = 0, j = n - 1;
    int ind = n - 1;
    while (i <= j)
    {
        if (a[i] < 0)
        {

            int left = a[i] * a[i];
            int right = a[j] * a[j];
            if (left <= right)
            {
                b[ind--] = right;
                b[ind--] = left;
            }
            else
            {
                b[ind--] = left;
                b[ind--] = right;
            }
            i++, j--;
        }
        else
        {

            int right = a[j] * a[j];
            b[ind--] = right;
            j--;
        }
    }
    for (i = 0; i < n; i++)
        cout << b[i] << " ";
}