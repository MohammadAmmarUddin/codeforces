#include <bits/stdc++.h>
#define ll long long
using namespace std;

int print(int n)
{

    if (n == 0)
        return 0;

    print(n - 1);

    cout << n << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    print(t);
    return 0;
}