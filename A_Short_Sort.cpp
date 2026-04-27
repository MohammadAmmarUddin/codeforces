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

        if (s[0] == 'b' && s[2] == 'a' || s[0] == 'c' && s[2] == 'b')
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }

    return 0;
}