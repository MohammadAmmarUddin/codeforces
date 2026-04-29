#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;
    cin.ignore();

    char s[101][101];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }
    int flag = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'C' || s[i][j] == 'M' || s[i][j] == 'Y')
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }

    return 0;
}