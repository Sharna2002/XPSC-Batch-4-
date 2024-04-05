#include <bits/stdc++.h>
#define sp    <<" "
#define nl    <<"\n"
#define yes   cout << "YES"
#define no    cout << "NO"
#define int   long long int
#define vc    vector<long long int>
#define wh    int tc; cin >> tc; while(tc--)
using namespace std;
int  a[200005], p[200005];
/**********************Krisna*********************/
void solve()
{
   int n,q,sum = 0;
   cin >> n >> q;
   
   
   for(int i=0;i<n;i++)
   {
     cin >> a[i];
   }
   p[0] = a[0];
   for(int i=1;i<n;i++)
   {
      p[i] = p[i-1] + a[i];
   }
   while(q--)
   {
      int l,r,k;
      cin >> l >> r >> k;
      int ans = (r-l+1)*k;
      int res = p[n-1] - ( p[r-1] - p[l-2] ) + ans ;
      if(res%2 != 0)
        yes nl;
     else 
        no nl;
   }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    wh{
       solve();
    }
    
    return 0;
}
 