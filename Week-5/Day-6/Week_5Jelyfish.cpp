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
     int a,b,n,ans = 0;
	   cin >> a >> b >> n ;
	   vi v(n);
	   if(b >= a)
	   {
	   	 ans = a;
	   	 b = a;
	   }
	   else
	   	ans = b;
	   for(int i=0;i<n;i++)
	  	{
	  		cin >> v[i];
	  		if((v[i]+1) <= a)
	  			ans += v[i];
	  		else
	  			ans += a-1;
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
    
    return 0;
}