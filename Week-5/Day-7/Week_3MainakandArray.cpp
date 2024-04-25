#include<bits/stdc++.h>
#define int   long long int
using namespace std;
int32_t  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,k,c=0,p=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) 
        { 
            cin>>a[i];
            }
        if(n==1)
        {
            cout << 0 << "\n";
            continue;
        }
        int m=a[n-1]-a[0];
        for(int i=1;i<n;i++)
        {
            m=max(m,a[i]-a[0]);
        }
        for(int i=0;i<n-1;i++)
        {
            m=max(m,a[n-1]-a[i]);
        }
        for(int i=1;i<n;i++)
        {
            m=max(m,a[i-1]-a[i]);
        }
        cout << m << "\n";
    }
}

















