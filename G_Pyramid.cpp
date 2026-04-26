#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int printPyramid(int i, int t)
{

    if (i > t)
        return 0;

    for (int j = 0; j < t - i; j++)
    {

        cout << " ";
    }

    for (int j = 0; j < 2 * i - 1; j++)
    {
        cout << "*";
    }
    cout << endl;

    return printPyramid(i + 1, t);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    printPyramid(1, t);

    return 0;
}