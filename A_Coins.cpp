

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
        ll a, b;
        cin >> a >> b;

        if (b % 2 == 1)

        {
            cout << "YES" << endl;
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}