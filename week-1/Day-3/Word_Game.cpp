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
   for(int i=0;i<n;i++)
    cin >> a[i];
   sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i] != (i+1))
        {
            cout << i+1 nl;
            return 0;
        }
    }
    
    return 0;
}