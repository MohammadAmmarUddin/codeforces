#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int evenindices(int n, int ar[])
{

    if (n == 0)
        return 0;

    int t;
    cin >> t;
    int indx = n - 1;
    if (indx % 2 == 0 || indx == 0)
    {
        cout << ar[indx] << " ";
    }

    return evenindices(n - 1, ar);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    evenindices(n, arr);

    return 0;
}