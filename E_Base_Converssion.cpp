#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int printBin(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int b;
    cin >> b;
    string s;
    while (b > 0)
    {

        if (b % 2 == 0)

        {
            s.push_back('0');
        }
        else
        {
            s.push_back('1');
        }

        b /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s;
    cout << endl;

    return printBin(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    printBin(t);

    return 0;
}