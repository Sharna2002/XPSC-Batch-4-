#include <bits/stdc++.h>
#define sp    <<" "
#define nl    <<"\n"
#define yes   cout << "YES" 
#define no    cout << "NO"
#define int   long long int
#define vc    vector<int>
#define whl   int tc; cin >> tc; while(tc--)
using namespace std;
/**********************Krisna*********************/
void solve()
{
    int n,x = 0;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        x ^= a[i];
    }
   for(int i=0;i<n;i++)
   {
      a[i] ^= x;
   }
   int y = 0;
   for(int i=0;i<n;i++)
   {
      y ^= a[i];
   }
   if(y == 0)
    cout << x nl;
   else
    cout << -1 nl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    whl
    {
     solve();
    }
    
    return 0;
}
 