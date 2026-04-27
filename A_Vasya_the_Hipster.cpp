#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;

    cin >> r >> b;

    cout << min(r, b) << " " << (max(r, b) - min(r, b)) / 2;

    return 0;
}