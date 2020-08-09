// [[[Q11 - Pair with Target Sum ]]]

// Given an array of sorted numbers and a target sum, find a pair in the array whose sum is equal to the given target.
// Write a function to return the indices of the two numbers (i.e. the pair) such that they add up to the given target.

// Example 1:

// Input: [1, 2, 3, 4, 6], target=6
// Output: [1, 3]
// Explanation: The numbers at index 1 and 3 add up to 6: 2+4=6

//ByFaizanAli
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define umi unordered_map<ll, ll>
int main()
{
    int n, i, j, k, tsum;
    cin >> n >> tsum;
    int a[n + 1];
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = 0, j = n - 1;
    int sum;
    pair<int, int> p;
    while (i < j)
    {
        sum = a[i] + a[j];
        if (sum == tsum)
        {
            p = {i, j};
            break;
        }
        if (sum < tsum)
            i++;
        else
            j--;
    }
    cout << p.first << " " << p.second;
}