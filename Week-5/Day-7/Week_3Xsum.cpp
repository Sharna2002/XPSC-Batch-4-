#include <bits/stdc++.h>
#define sp    <<" "
#define nl    <<"\n"
#define yes   cout << "YES"
#define no    cout << "NO"
#define int   long long int
#define vi    vector<int>
#define vs    vector<string>
#define wh    int tc; cin >> tc; while(tc--)
using namespace std;
/**********************Krisna*********************/
void solve()
{
    int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
 
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = a[i][j];
                int x = j - 1;
                int y = j + 1;
                for (int k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        sum += a[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += a[k][y];
                        y++;
                    }
                }
                x = j - 1;
                y = j + 1;
                for (int k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        sum += a[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += a[k][y];
                        y++;
                    }
                }
                if (sum > ans)
                    ans = sum;
            }
        }
        cout << ans nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    wh{
    	solve();
    }
    //solve();
    return 0;
}