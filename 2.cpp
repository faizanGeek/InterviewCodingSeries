// Given an array of positive numbers and a positive number ‘k’, find the maximum sum of any contiguous subarray of size ‘k’.

// Example 1:

// Input: [2, 1, 5, 1, 3, 2], k=3
// Output: 9
// Explanation: Subarray with maximum sum is [5, 1, 3]

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define umi unordered_map<ll, ll>
int main()
{
    int n, i, j, k;
    cin >> n >> k;
    int a[n + 1];
    for (i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (i >= k - 1)
        {
            mx = max(mx, sum);
            sum -= a[i - (k - 1)];
        }
    }
    cout << mx;
}