#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z, ar[3];
    cin >> x >> y >> z;

    ar[0] = x;
    ar[1] = y;
    ar[2] = z;
    sort(ar, ar + 3);
    int mx = max({x, y, z});
    int mn = min({x, y, z});

    if (mx - mn >= 10)
    {
        cout << "check again";
    }

    else if (x != mx && x != mn)
    {
        cout << "final" << " " << x;
    }
    else if (y != mx && y != mn)
    {
        cout << "final" << " " << y;
    }
    else if (z != mx && z != mn)
    {
        cout << "final" << " " << z;
    }
    else
    {
        cout << "final" << " " << ar[1];
    }

    return 0;
}