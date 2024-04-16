#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n ,sum = 0,p=0,x=0,i;
        cin>>n;
        vector<long long int>v(n);
        for( i = 0;i < n; ++i) 
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        for( i= 0; i < n; ++i)
        {
            if(v[i]<=0)
            {
                if(v[i]<0)
                    x = 1;
            }
            else
            {
                if(x == 1)
                    p++;
                x=0;
            }
        }
        if(x==1)
        p++;
        cout<< sum << " " << p <<'\n';
            
    }
}