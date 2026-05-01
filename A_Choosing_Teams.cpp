#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k;
    cin >> t >> k;
    int ar[t];
    for (int i = 0; i < t; i++)
    {
        cin >> ar[i];
    }

    int cnt = 0;

    for (int i = 0; i < t; i++)
    {
        if (5 - ar[i] >= k)

        {
            cnt++;
        }
    }

 
        cout << cnt / 3;
    

    return 0;
}