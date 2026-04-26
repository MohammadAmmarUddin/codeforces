#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int printPyramid(int t, int i)
{

    if (i == 0)
        return 0;

    for (int j = t - i; j > 0; j--)
    {

        cout << " ";
    }
    for (int j = 2 * i - 1; j > 0; j--)
    {
        cout << "*";
    }
    cout << endl;

    return printPyramid(t, i - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    printPyramid(t, t);

    return 0;
}