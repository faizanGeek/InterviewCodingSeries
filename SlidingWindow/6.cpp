// [[[Q6-No-repeat Substring (medium)]]]

// Problem Statement #
// Given a string, find the length of the longest substring which has no repeating characters.

// Example 1:

// Input: String="aabccbb"
// Output: 3
// Explanation: The longest substring without any repeating characters is "abc".

//ByFaizanAli
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define umi unordered_map<ll, ll>
int main()
{
    string str;
    cin >> str;
    int n = str.size(), i, j;
    i = 0, j = 0;
    int mx = -1;
    map<char, int> mp;
    while (i < n && j < n && i <= j)
    {
        if (mp[str[j]] == 0)
        {
            mp[str[j++]]++;

            mx = max(mx, j - i);
        }
        else
        {
            mp[str[i++]]--;
        }
    }
    cout << mx << " ";
}