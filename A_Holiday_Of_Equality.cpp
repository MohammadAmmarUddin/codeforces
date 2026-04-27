#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int ar[t], sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> ar[i];

        sum = sum + ar[i];
    }

    sort(ar, ar + t);

    int mx = ar[t - 1];
    
    cout
        << (mx*t) - sum;

    return 0;
}