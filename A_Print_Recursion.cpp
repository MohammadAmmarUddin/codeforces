#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int res(int t)
{

    if (t == 0)
        return 0;

    cout << "I love Recursion" << endl;
    res(t - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    res(n);

    return 0;
}