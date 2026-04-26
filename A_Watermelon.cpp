#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int flag = 0;
    for (int i = 2; i <= n; i += 2)
    {
        for (int j = 2; j <= n; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                if (i + j == n)
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}