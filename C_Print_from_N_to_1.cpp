#include <bits/stdc++.h>
#define ll long long
using namespace std;

int print(int n)
{

    if (n == 0)
        return 0;

    cout << n - (n - 1);

    if (n > 1)
    {
        cout << " ";
    }
    return print(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll int t;
    cin >> t;
    print(t);
    return 0;
}