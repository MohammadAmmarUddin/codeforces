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
        int r;
        cin >> r;

        if (r >= 1900)
        {
            cout << "Division 1" << endl;
        }

        else if (r <= 1899 && r >= 1600)
        {
            cout << "Division 2" << endl;
        }
        else if (r >= 1400 && r <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (r <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }

    return 0;
}