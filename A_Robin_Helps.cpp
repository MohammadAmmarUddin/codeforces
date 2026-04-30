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
        int n, k;
        cin >> n >> k;
        int ar[n];
        int temp = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] >= k)
            {
                temp += ar[i];
            }
            else if (ar[i] == 0 && temp > 0)
            {
                temp--;
                cnt++;
            }
        }

        
        cout << cnt << endl;

        // cout << temp << " " << cnt << endl;

        // if (cnt == 0)
        // {
        //     cout << 0 << endl;
        // }
        // else if (temp < cnt)
        // {
        //     cout << temp << endl;
        // }
        // else if (temp > cnt)
        // {
        //     cout << cnt << endl;
        // }
    }

    return 0;
}