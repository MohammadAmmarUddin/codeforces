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
    int ct = 0;

    while (t--)
    {
        int x, y, z;

        cin >> x >> y >> z;

        if (x == 1 && y == 1 || y == 1 && z == 1 || x == 1 && z == 1)
        {
            ct++;
        }
    }

    cout << ct;

    return 0;
}