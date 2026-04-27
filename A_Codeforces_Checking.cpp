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
        string temp = "codeforces";
        int cnt = 0;
        for (int i = 0; i < temp.length(); i++)
        {

            if (s[0] == temp[i])
            {
                cnt++;
            }
        }
        if (cnt)
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