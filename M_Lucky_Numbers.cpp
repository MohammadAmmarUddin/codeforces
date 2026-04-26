#include <bits/stdc++.h>
#define ll long long
#include <iomanip>
#include <math.h>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

bool isLucky(long long n)
{
    if (n == 0)
        return false;

    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    fast_cin();

    long long a, b;
    cin >> a >> b;

    bool found = false;

    for (long long i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            found = true;
        }
    }
    if (!found)
    {
        cout << -1;
    }

    return 0;
}