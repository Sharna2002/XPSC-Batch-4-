#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;while(tc--)
    {
        long long int n,m,h,i,j=0;
          cin >> n >> m >> h;
        long long  int a[n],b[m];
       for( i=0;i<n;i++) 
        cin>>a[i];
       for( i=0;i<m;i++) 
        cin>>b[i];
       sort(a,a+n,greater<int>());
       sort(b,b+m,greater<int>());
       long long int x = 0;
       while(j<n && j<m)
       {
         x += min(a[j],(b[j]*h));
         j++;
       }
       cout << x <<'\n';
    }
    return 0;
}