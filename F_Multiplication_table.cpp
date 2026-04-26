#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#define db1(x) cout << #x << "=" << x << '\n'
#define db2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)
using namespace std;
#define fast_cin()                   \
   ios_base::sync_with_stdio(false); \
   cin.tie(NULL);                    \
   cout.tie(NULL)
int main()
{
   fast_cin();

   int n;

   cin >> n;
   int t = 12;
   for (int i = 1; i <= 12; i++)
   {
      cout << n << " " << "*" << " " << i << " " << "=" << " " << n * i << endl;
   }

   return 0;
}