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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        string s2 = "codeforces";
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s2[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}