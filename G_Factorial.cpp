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

    int t, n;
    cin >> t;

    while (t--)
    {
        long long fact = 1;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {

            fact = fact * i;
        }
        cout << fact << endl;
    }

    return 0;
}