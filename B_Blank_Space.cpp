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
        int n;
        cin >> n;
        int ar[n];

        int x;
        int mx = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else
            {
                cnt = 0;
            }
        }

        cout << mx << endl;
    }

    return 0;
}