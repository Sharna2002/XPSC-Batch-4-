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
	  int a[n];
	   for(int i=0;i<n;i++)
	  	cin >> a[i];
	 sort(a,a+n);
   
	 while(x--)
	  { 
	  	int iteam;
	    cin >> iteam;
	    int mid,l=0,r=n-1;
            int f=0;
	    
	  	while(l<=r)
	     {
	  	  mid = ceil((l+r)/2);
	  	  if(a[mid] == iteam)
	  	  	{
	  	  		f=1;
	  	  		break;
	  	  	}
	  	  else if( a[mid] < iteam)
	  	  {
	  	  	  l = mid +1;
	  	  }
	  	  else 
	  	    r = mid-1;
	      }
	      if(f)
	  	    yes nl;
	      else 
	        no nl;
	  }
	  // if(f)
	  // 	yes nl;
	  // else 
	  //  no nl;
	 
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
 