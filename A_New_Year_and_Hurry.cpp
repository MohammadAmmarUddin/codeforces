#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    int leftTime = 240 - t;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i * 5 <= leftTime)
        {
            cnt++;
            leftTime -= i * 5;
        }
        else
        {
            break;
        }
    }
    cout << cnt;

    return 0;
}