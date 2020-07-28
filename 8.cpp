// [[[Q8-Longest Subarray with Ones after Replacement ]]]
// Problem Statement #
// Given an array containing 0s and 1s, if you are allowed to replace no more than ‘k’ 0s with 1s, find the length of the longest contiguous subarray having all 1s.

// Example 1:

// Input: Array=01100011011  k=2
// Output: 6
// Explanation: Replace the '0' at index 5 and 8 to have the longest contiguous subarray of 1s having length 6.

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
    int ones = 0, zero = 0;
    while (i < n && j < n && i <= j)
    {
        if (str[j] == '0')
        {
            zero++;
        }
        else
        {
            ones++;
        }
        if (j - i + 1 - ones > k)
        {
            if (str[i] == '1')
                ones--;
            i++;
        }
        j++;
        mx = max(mx, j - i);
    }
    mx = max(mx, j - i);
    cout << mx << " ";
}