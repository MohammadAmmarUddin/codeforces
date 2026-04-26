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
    int n;
    while (t--)
    {
        cin >> n;
        int cnt = 0;
        int place = 1, digit;
        vector<int> v;
        while (n > 0)
        {
            digit = n % 10;

            if (digit != 0)
            {

                // cout << place * digit << endl;
                v.push_back(place * digit);
                cnt++;
            }
            place *= 10;
            n = n / 10;
        }

        cout << cnt << endl;
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}