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
    int n,k;
    cin >> n >> k;
    vi a(n);
    for(int i=0;i<n;i++)
    {
    	cin >> a[i];
    }
    int x = 0,cnt = 0;
    for(int i=0;i<=n-k;i++)
    {
    	 for(int j = i;j<i+k;j++)
    	 {
    	 	  if (a[j]%2!=0)
            {
               x = 1;
               break;
            }
    	 }
    	 // cout << x sp;
    	 // cout nl;
    	 if(x == 1)
    	 	cnt++;
    	 x = 0;
    }
    cout << cnt nl;
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
 