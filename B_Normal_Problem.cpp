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

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'q')
            {
                s[i] = 'p';
            }
            else if (s[i] == 'p')
            {
                s[i] = 'q';
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}