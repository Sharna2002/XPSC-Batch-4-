#include <bits/stdc++.h>
#define sp   <<" "
#define nl   <<"\n"
#define yes  cout << "YES"
#define no   cout << "NO"
#define int  long long int
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,b,mx = INT_MIN,p=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];

         }
        for(int i=0;i<n;i++)
       {
        if(a[i] > i)
          mx = max(mx,a[i]-i-1);

       }
      cout << mx nl;
     }
    return 0;
}
