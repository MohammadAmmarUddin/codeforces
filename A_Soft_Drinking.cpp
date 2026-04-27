#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    ll drink = (k * l) / nl;
    ll limes = c * d;
    ll salt = p / np;

    cout << min({drink, limes, salt}) / n;

    return 0;
}