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
        cin >> s;

        int n = s.size();

        if (n % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        string first = s.substr(0, n / 2);
        string second = s.substr(n / 2);

        if (first == second)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}