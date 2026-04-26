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

    string s;
    cin >> s;

    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ar[i]; j++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}