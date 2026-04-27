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

    while (t--)
    {
        string s1, s2;

        cin >> s1 >> s2;

        swap(s1[0], s2[0]);
        cout << s1 << " " << s2;
        cout << endl;
    }

    return 0;
}