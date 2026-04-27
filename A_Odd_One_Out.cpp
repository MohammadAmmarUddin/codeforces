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

        int a, b, c;
        cin >> a >> b >> c;

        if (a != b && b == c)
        {
            cout << a << endl;
        }
        else if (a != c && b == c)
        {
            cout << c << endl;
        }
        else if (a == b && a != c)
        {
            cout << c << endl;
        }
        else if (b != c && a == c)
        {
            cout << b << endl;
        }
    }

    return 0;
}