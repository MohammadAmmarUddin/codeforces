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

    int arr[t];
    while (t--)
    {
        int cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        // for (int i = 0; i < 4; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        for (int i = 1; i < 4; i++)
        {
            if (arr[0] < arr[i])
            {

                cnt++;
            }
        }
        cout << cnt;
        cout << endl;
    }

    return 0;
}