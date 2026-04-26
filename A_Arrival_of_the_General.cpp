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

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;

    int mx = *max_element(arr, arr + n);
    int mn = *min_element(arr, arr + n);
    int max_pos = 0;
    int min_pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[max_pos])
        {
            max_pos = i;
        }
        if (arr[i] <= arr[min_pos])
        {
            min_pos = i;
        }
    }

    if (max_pos > min_pos)
    {
        min_pos++;
    }

    int totalSwap = max_pos + (n - 1) - min_pos;
    cout << totalSwap;

    return 0;
}