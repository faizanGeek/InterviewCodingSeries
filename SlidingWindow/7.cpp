// [[[Q7-Longest Substring with Same Letters after Replacement]]]

// Problem Statement #
// Given a string with lowercase letters only, if you are allowed to replace no more than ‘k’ letters with any letter, find the length of the longest substring having the same letters after replacement.

// Example 1:

// Input: String="aabccbb", k=2
// Output: 5
// Explanation: Replace the two 'c' with 'b' to have a longest repeating substring "bbbbb".

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
    int k;
    cin >> str >> k;
    int n = str.size(), i = 0, j = 0;
    int mx = -1;
    int cnt = 0;
    map<char, int> mp;

    int ans = -1;
    while (i < n && j < n && i <= j)
    {
        mp[str[j]]++;
        mx = max(mx, mp[str[j]]);
        if (j - i + 1 - mx > k)
        {
            mp[str[i]]--;
            i++;
        }
        ans = max(ans, j - i);
        j++;
    }
    ans = max(ans, j - i);
    cout << ans;
}
