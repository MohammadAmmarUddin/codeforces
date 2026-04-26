#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int stringPrint(int n)
{
    if (n == 0)
        return 0;

    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    return stringPrint(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stringPrint(n);
    return 0;
}