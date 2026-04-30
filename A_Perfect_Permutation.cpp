#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ar[n];
    if (n % 2)
    {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {

        ar[i] = i + 1;
    }

    sort(ar, ar + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] < ar[i + 1])
        {
            swap(ar[i], ar[i + 1]);
            i = i + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}