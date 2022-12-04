#include <bits/stdc++.h>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
#define inf 2e5
int main()
{
    int n, m;
    ll k;
    cin >> n >> m >> k;
    int a[200000], b[200000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int count = 0;
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else
        {
            if (a[i] - b[j] > k)
                j++;
            else
                i++;
        }
    }
    cout << count;

    return 0;
}