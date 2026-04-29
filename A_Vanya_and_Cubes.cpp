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
    int sum = 0;
    for (int i = 1;; i++)
    {

        int calc = (i * (i + 1)) / 2;
        cout << calc << endl;
        sum = sum + calc;

        if (sum == t)
        {
            break;
        }
    }

    cout << sum;
    return 0;
}