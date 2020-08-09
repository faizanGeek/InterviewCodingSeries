// [[[ Q12 -Remove Duplicates]]]

// Problem Statement #
// Given an array of sorted numbers, remove all duplicates from it. You should not use any extra space; after removing the duplicates in-place return the new length of the array.

// Example 1:

// Input: [2, 3, 3, 3, 6, 9, 9]
// Output: 4
// Explanation: The first four elements after removing the duplicates will be [2, 3, 6, 9].

//ByFaizanAli
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define umi unordered_map<ll, ll>
int main()
{
    int n, i, j, k;
    cin >> n;
    int a[n + 1];
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = 0, j = 1;
    while (i < n && i < n && j < n)
    {
        if (a[i] != a[j])
        {
            a[i + 1] = a[j];
            i++, j++;
        }
        else
        {
            j++;
        }
    }
    cout << i + 1 << " ";
}
