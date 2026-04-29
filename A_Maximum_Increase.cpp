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
    int cnt = 1;
    int ar[t];
    int len = 1;
    for (int i = 0; i < t; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < t - 1; i++)
    {
        if (ar[i] < ar[i + 1])
        {

            {
                cnt++;
            }
        }

        else
        {
            cnt = 1;
        }
        len = max(len, cnt);
    }

    cout << len;

    return 0;
}