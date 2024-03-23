#include <bits/stdc++.h>
#define sp   <<" "
#define nl   <<"\n"
#define yes  cout << "YES"
#define no   cout << "NO"
#define int  long long int
#define vc   vector<int>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin >> n >> x;
    vc a(n);
    for(int i=0;i<n;i++)
    {
       cin >> a[i];
       if(a[i] != x)
        cout << a[i] sp;
    }
    return 0;
}
