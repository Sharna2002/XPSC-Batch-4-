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
     int n,x;
	   cin >> n >> x;
	   vi a(n);
	   for(int i=0;i<n;i++)
	  	cin >> a[i];
	  while(x--)
	  {
	  	  int m;
	  	  cin >> m;
	  	  auto it = upper_bound(a.begin(),a.end(),m-1);
	  	  if(*it != m)
	  	  	cout << it - a.begin()+1 sp;
	  	  else
	  	  cout << it - a.begin()+1  sp;
	  }
	 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // wh
    // {
        solve();
   // }
    
    return 0;
}
 