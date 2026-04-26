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

        for (char &c : s)
        {
            c = toupper(c);
        }

        if (s[0] == 'Y' && s[1] == 'E' && s[2] == 'S')
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}