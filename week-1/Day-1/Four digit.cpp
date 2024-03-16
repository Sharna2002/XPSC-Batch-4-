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
    
    int n ,a = 0;
    cin >> n;
    int m = n;
    if(n != 0)
    {
         while(n > 0)
    {
       n = n/10;
       a++;
    }
     //cout << a nl;
    if(a == 1)
        cout << "000" << m nl;
    else if(a == 2)
        cout << "00" << m nl;
    else if(a == 3)
        cout << "0" << m nl;
    else
      cout << m nl; 
    
    }
    else
        cout <<"0000" nl;
    return 0;
}
