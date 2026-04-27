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

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int temp, flag = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                if (arr[i + 2] == arr[i] || arr[i - 1] == arr[i])
                {
                    temp = i + 1;
                }
                else
                    temp = i;
            }
        }

        cout << temp + 1;
        cout << endl;
    }

    return 0;
}