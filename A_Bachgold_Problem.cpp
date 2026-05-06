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

    int cnt = 0;

    if (t % 2 == 0)
    {
        cout << t / 2 << endl;

        for (int i = 0; i < t / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << (t - 3) / 2 + 1 << endl;

        for (int i = 0; i < (t - 3) / 2; i++)
            cout << 2 << " ";

        cout << 3 << " ";
    }

    return 0;
}