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
     int n,m;
	   cin >> n >> m;
	   vi a(n),b(n);
	   for(int i=0;i<n;i++)
	  	{
	  		cin >> a[i];
	    }
	  sort(a.begin(),a.end(),greater<int>());
	  int x = a[0];
	  //cout << x nl;
	   b[0] = x;
	   //cout << b[0] sp nl;
	  for(int i = 1; i< n;i++)
	  {
	  	  b[i] = a[i]+b[i-1];
	  	 //cout << b[i] sp;
	  }
	  while(m--)
	  {
        int p;
        cin >> p;
        int l=0, r = n-1,mid,ans = -1;
        while(l<=r)
        {
        	 mid = (l+r)/2;
        	 if(b[mid] >= p)
        	 {
        	 	 r = mid-1;
        	 	 ans = mid + 1;
        	 }
        	 else
        	 {
        	 	  l = mid + 1;
        	 }
        }
        cout << ans nl;
	  }
	  
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