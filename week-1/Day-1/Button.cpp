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
  
    int a,b,ans;
    cin >> a >> b;
    if(a >= b)
    	{
    		 int x = a - 1;
    		 if(x >= b)
    		 {
    		 	 ans = a + x;
    		 	 cout << ans nl;
    		 }
    		 else
    		 	 {
    		 	 	 ans = a + b;
    		 	 	 cout << ans nl;
    		 	 }
    	}
   else
    	{
    		 int x = b - 1;
    		 if(x >= a)
    		 {
    		 	 ans = b + x;
    		 	 cout << ans nl;
    		 }
    		 else
    		 	 {
    		 	 	 ans = a + b;
    		 	 	 cout << ans nl;
    		 	 }
    	}
	 return 0;
}
