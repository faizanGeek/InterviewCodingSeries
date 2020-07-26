// [[[Q5-Fruits into Baskets (medium)]]]

// ***Problem Statement #
// Given an array of characters where each character represents a fruit tree, you are given two baskets and your goal is to put maximum number of fruits in each basket. The only restriction is that each basket can have only one type of fruit.

// You can start with any tree, but once you have started you can’t skip a tree. You will pick one fruit from each tree until you cannot, i.e., you will stop when you have to pick from a third fruit type.

// Write a function to return the maximum number of fruits in both the baskets.

// Example 1:

// Input: Fruit=ABCAC
// Output: 3
// Explanation: We can put 2 'C' in one basket and one 'A' in the other from the subarray "CAC"

//***CODE***
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
    cin >> str;
    n = str.size();
    map<char, int> mp;
    i = 0, j = 0;
    int dist = 0, mx = -1;
    while (i < n && j < n && i <= j)
    {
        if (mp[str[j]] == 0)
        {

            if (dist < 2)
            {
                mp[str[j]]++;

                dist++;
                j++;
            }
            else
            {

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
