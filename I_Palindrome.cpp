#include <bits/stdc++.h>
#define ll long long
#include <iomanip>
#include <math.h>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;
int main()
{
    fast_cin();

    string n, s;
    cin >> n;
    string r = n;
    reverse(r.begin(), r.end());

    int x = stoi(r);
    int flag = 0;
    int cnt = 0;
    for (int i = 0; i < r.size(); i++)
    {

        if (r[i] > '0')
        {
            cnt = i;

            // cout << cnt << endl;
            break;
        }
    }
    r.erase(0, cnt);
    cout << r;
    // for (int i = 0;)

    if (n == r)
    {
        cout << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << endl;
        cout << "NO" << endl;
    }
    return 0;
}