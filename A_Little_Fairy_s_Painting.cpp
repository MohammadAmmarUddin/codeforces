#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int n;
    cin >> t;
    while (t--)
    {

        cin >> n;

        int ar[n];
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);

        for (int j = 0; j < n; j++)
        {

            if (ar[j] == ar[j + 1])
            {
                cout << ar[0] << endl;

                break;
            }
            else if (n == 1)
            {
                cout << ar[0] << endl;
                break;
            }
            else if (ar[j] != ar[j + 1])
            {
                ct++;
            }
        }

        for (int k = 0; k < n; k++)
        {
            if (ct == ar[k])
            {
                cout << ar[k] << endl;
                break;
            }
            else
            {
                ct++;
            }
        }
        cout << ct << "\n";
        ct = 0;
    }

    return 0;
}