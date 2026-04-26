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

    int n;
    int flag = 0;
    cin >> n;

    if (n == 2)

    {
        cout << "YES" << endl;
        return 0;
    }

    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {

            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}