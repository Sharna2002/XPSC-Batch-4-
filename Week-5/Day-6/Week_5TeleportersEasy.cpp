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
     int n,c,odd = 0,ans = 0,cnt = 0;
	   cin >> n >> c ;
	   vi a(n);
	   for(int i=0;i<n;i++)
	  	{
	  		cin >> a[i];
	  		a[i] += (i+1);
	    }
	    sort(a.begin(),a.end());
	    for(int i=0;i<n;i++)
	    {
	    	 ans += a[i];
	    	 if(ans <= c)
	    	 	cnt++;
	    	 else break;
	    }
	    cout << cnt nl;
	  
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