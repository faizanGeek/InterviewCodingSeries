/// [[[Q-9 Permutation in a String #]]]

// Given a string and a pattern, find out if the string contains any permutation of the pattern.

// Permutation is defined as the re-arranging of the characters of the string. For example, “abc” has the following six permutations:

// abc
// acb
// bac
// bca
// cab
// cba
// If a string has ‘n’ distinct characters it will have n!n! permutations.

// Example 1:

// Input: String="oidbcaf", Pattern="abc"
// Output: true
// Explanation: The string contains "bca" which is a permutation of the given pattern.

//ByFaizanAli
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define umi unordered_map<ll, ll>
int main()
{
    string str, ptn;
    cin >> str >> ptn;
    int i = 0, j, n = str.size();
    map<char, int> mp, mp1;
    for (auto x : ptn)
        mp[x]++;
    mp1 = mp;
    int cnt = 0;
    // cout << cnt << " ";
    for (j = 0; j < n;)
    {
        if (cnt == ptn.size())
        {
            cout << "true";
            return 0;
        }

        if (mp1[str[j]] >= 1)
        {
            mp1[str[j]]--;
            cnt++;
            j++;
        }
        else
        {
            if (cnt > 0)
                cnt--;
            if (mp[str[i]] >= 0)
            {
                mp1[str[i]]++;
            }
            i++;
        }
    }

    if (cnt == ptn.size())
    {
        cout << "true";
        return 0;
    }
    cout << "false";
}
