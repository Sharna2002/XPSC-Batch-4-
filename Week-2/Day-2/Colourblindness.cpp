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
    cin>>tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string a , b;
        cin >>a >> b;
         replace(begin(a),end(b),'G','B');
         replace(begin(b),end(b),'G','B');
         if(a == b)
           yes nl;
         else
           no nl;
    }
    return 0;
}
 