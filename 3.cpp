// [[[Q3-Smallest Subarray with a given sum (easy)]]]

// Given an array of positive numbers and a positive number ‘S’,
// find the length of the smallest contiguous subarray
// whose sum is greater than or equal to ‘S’. Return 0,
// if no such subarray exists.
// Example:
// Input: [2, 1, 5, 2, 3, 2], S=7
// Output: 2
// Explanation: The smallest subarray with a sum great than or equal to '7' is [5, 2].

//By Faizan Ali

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define umi unordered_map<ll, ll>
int main()
{
    int n, i, j, k, s;
    cin >> n >> s;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    i = 0, j = 0;
    int sum = a[0];
    int ans = -1;
    // cout << "ji";
    while (i < n && j < n && i <= j)
    {
        if (sum == s)
        {
            ans = j - i + 1;
            break;
        }
        if (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum < s)
        {
            j++;
            sum += a[j];
        }
    }
    if (ans == -1)
        return 0;
    else
    {
        cout << ans;
    }
}