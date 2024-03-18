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
    
   int n;
   cin >> n;
   int a[n];
   int sum = 0, mn = INT_MAX;
   for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2 != 0)
        mn = min(mn,a[i]);
    }
   if(sum % 2 == 0)
    cout << sum nl;
   else
   {
     sum -= mn;
     cout << sum nl;
   } 
    
    return 0;
}
