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

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int mx1 = max(a, b);
        int mx2 = max(c, d);

        int mn1 = min(a, b);
        int mn2 = min(c, d);

        if (max(mn1, mn2) < min(mx1, mx2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}