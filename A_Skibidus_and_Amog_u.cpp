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

        // if (s == "us")
        // {
        //     cout << "i";
        // }
        // if (s == "i")
        // {
        //     cout << "us";
        // }

        int n = s.size();
        if (s[n - 1] == 's' && s[n - 2] == 'u')
        {

            cout << s.replace(n - 2, 2, "i");
        }
        else
        {
            cout << s.replace(n - 2, 2, "us");
        }
        cout << endl;
    }

    return 0;
}