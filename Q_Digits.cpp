#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 1000000007;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int j = 0; j < ar.size(); j++)
    {
        int d;
        int x = ar[j];
        while (x)
        {
            d = x % 10;
            cout << d << " ";
            x /= 10;
        }
        cout << endl;
    }

    return 0;
}