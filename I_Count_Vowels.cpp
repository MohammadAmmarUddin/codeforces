#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int printVowel(string s, int len)
{

    if (len == 0)
        return 0;
    int cnt = 0;
    if (s[len - 1] == 'a' || s[len - 1] == 'e' || s[len - 1] == 'i' || s[len - 1] == 'o' || s[len - 1] == 'o' || s[len - 1] == 'u' || s[len - 1] == 'A' || s[len - 1] == 'E' || s[len - 1] == 'I' || s[len - 1] == 'O' || s[len - 1] == 'U')
    {
        cnt++;
    }

    return cnt + printVowel(s, len - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int len = s.length();
    cout << printVowel(s, len);

    return 0;
}