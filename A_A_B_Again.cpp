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

        cout << (s[0] - '0') + (s[1] - '0');

        cout << endl;
    }

    return 0;
}