// [[[Q10-String Anagrams]]]

// Given a string and a pattern, find all anagrams of the pattern in the given string.

// Anagram is actually a Permutation of a string. For example, “abc” has the following six anagrams:

// abc
// acb
// bac
// bca
// cab
// cba
// Write a function to return a list of starting indices of the anagrams of the pattern in the given string.

// Example 1:

// Input: String="ppqp", Pattern="pq"
// Output: [1, 2]
// Explanation: The two anagrams of the pattern in the given string are "pq" and "qp".

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
    vector<int> v;
    for (j = 0; j < n;)
    {
        if (cnt == ptn.size())
        {
            v.push_back(i);
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
        v.push_back(i);
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
}