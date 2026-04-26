#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;

    int ar[t];
    int temp = 0;
    int ct = 0;
    for (int i = 1; i <= t; i++)
    {

        cin >> ar[i];
    }

    for (int j = 1; j <= t; j++)
    {

        if (ar[j] > 0 && ar[j] >= ar[n])
        {
            ct++;
        }
    }
    cout << ct;
    return 0;
}