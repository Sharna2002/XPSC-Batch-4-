#include<bits/stdc++.h>
using namespace std;
#define sp   <<" "
#define nl   <<"\n"
#define yes  cout << "YES"
#define no   cout << "NO"
#define int  long long int


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
    int a,b;
    cin >> a >> b;
    if(b < a)
    	cout << 0 nl;
    else if(a == b)
     {
     	 int ans = (b - a) + 1;
       cout << ans nl;
     }
    else 
     {
     	 int ans = (b - a) + 1;
       cout << ans nl;
     }
	 return 0;
}