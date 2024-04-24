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
    int n,ans = 0;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++)
    	cin >> a[i];
    int m;
    cin >> m;
    vi b(m);
    for(int i=0;i<m;i++)
    	cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		 if (abs(a[i] - b[j]) <= 1)
    		 {
    		 	  ans++;
    		 	  b[j] = -10;
    		 	  break;
    		 }
    	}
    }
    cout << ans nl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // wh{
    // 	solve();
    // }
    solve();
    return 0;
}