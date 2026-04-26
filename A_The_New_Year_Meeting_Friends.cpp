#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int mx = max({x, y, z});
    int mn = min({x, y, z});

    if (x == mx && y == mn || y == mx && x == mn)
    {
        cout << abs(x - z) + abs(y - z);
    }
    else if (x == mx && z == mn || x == mn && z == mx)
    {
        cout << abs(x - y) + abs(y - z);
    }
    else if (z == mx && y == mn || y == mx && z == mn)
    {
        cout << abs(z - x) + abs(x - y);
    }
    return 0;
}