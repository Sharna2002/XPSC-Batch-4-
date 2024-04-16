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
    int n,k,q;
    cin >> n >> k >> q;
    int ans = 0,sum = 0;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin >> x;
    	if(x <= q)
    		{
    			ans++;
    			if(ans >= k)
    			{
    				sum += ans - k + 1;
    			}
    		}
    	else
    		ans = 0;

    }
    cout << sum nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    wh
    {
        solve();
    }
    
    return 0;
}
 