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
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        for(int i=0;i<n;i++)
        {
           int x;
           string s;
           cin >> x >> s;
           int m = a[i];
           for(int j=0;j<x;j++)
           {
              if(s[j] == 'U')
              {
                  m--;
                  if(m < 0)
                  {
                     m = 10 + m;
                  }
                  else if(m > 9)
                  {
                    m = 10 - m;
                  }
              }
              else
              {
                 m++;
                 if(m < 0)
                  {
                     m = 10 + m;
                  }
                  else if(m > 9)
                  {
                    m = 10 - m;
                  }
              }
              
           }
           cout << m sp;

        }
        cout nl;
    }
    return 0;
}
 