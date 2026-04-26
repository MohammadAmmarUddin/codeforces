#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    ll count = 0;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s.size() > 10)
            {
                count++;
            }
        }
        if (count > 0)
        {
            if (s[0] != 0)
            {
                cout << s[0] << count << s[s.length() - 1] << "\n";
            }
        }
        else
        {
            cout << s << "\n";
        }
        count = 0;
    }

    return 0;
}