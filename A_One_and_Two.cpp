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
        int cnt = 0;
        int total2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 2)
            {
                total2++;
            }
        }

        if (total2 % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int need = total2 / 2;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 2)
            {
                cnt++;
            }

            if (cnt == need)
            {
                cout << i + 1 << endl;

                break;
            }
        }
    }

    return 0;
}