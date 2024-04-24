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
     int n,odd = 0,ans = 0,mn = INT_MAX;
	   cin >> n ;
	   vi a(n);
	   for(int i=0;i<n;i++)
	  	{
	  		cin >> a[i];
	  		if(a[i] < 0)
	  			odd++;
	  		ans += abs(a[i]);
	  		mn = min(mn,abs(a[i]));
	    }
	    if(odd%2 == 1)
	    	ans -= mn*2;
	    cout << ans nl;
	  
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    wh{
    	solve();
    }
    
    return 0;
}