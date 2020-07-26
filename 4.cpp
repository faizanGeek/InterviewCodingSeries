// [[[Q4 - Longest Substring with K Distinct Characters (medium)]]]

// Given a string, find the length of the longest substring in it with no more than K distinct characters.

// Example 1:

// Input: String="araaci", K=2
// Output: 4
// Explanation: The longest substring with no more than '2' distinct characters is "araa".

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
    string str;
    cin >> str >> k;
    n = str.size();
    map<char, int> mp;
    i = 0, j = 0;
    int dist = 0, mx = -1;
    while (i < n && j < n && i <= j)
    {
        if (mp[str[j]] == 0)
        {

            if (dist < k)
            {
                mp[str[j]]++;
                cout << dist << "* ";
                dist++;
                j++;
            }
            else
            {
                cout << j << " " << i << endl;
                mx = max(mx, j - i);
                mp[str[i]]--;
                if (mp[str[i]] == 0)
                    dist--;
                i++;
            }
        }
        else
            j++;
    }
    mx = max(mx, j - i);
    cout << mx;
}