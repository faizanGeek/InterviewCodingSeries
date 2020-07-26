// Given an array, find the average of all contiguous subarrays of size ‘K’ in it.
// Array: [1, 3, 2, 6, -1, 4, 1, 8, 2], K=5
// Output: [2.2, 2.8, 2.4, 3.6, 2.8]
// by Faizan Ali

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
    vector<float> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (i >= k - 1)
        {
            v.push_back(sum / k);
            sum = sum - a[i - k + 1];
        }
    }
    for (auto x : v)
        cout << x << " ";
}