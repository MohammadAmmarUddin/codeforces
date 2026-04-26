#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int l, r;
    cin >> l >> r;

    int mn = min(l, r);
    int mx = max(l, r);
    int sum = 0;

    for (int i = mn + 1; i < mx; i++)
    {
      if (i % 2 != 0)
      {
        sum += i;
      }
    }

    cout << sum << "\n";
  }

  return 0;
}
