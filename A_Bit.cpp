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
    int ct = 0;
    while (t--)
    {
        string s;
        cin >> s;

        if (s[0] == '+' || s[2] == '+')
        {
            ct++;
        }
        else
        {
            ct--;
        }
    }

    cout << ct;

    return 0;
}