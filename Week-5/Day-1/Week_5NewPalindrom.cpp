#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int flag=0;
        for(int i=1;i<s.size()/2;++i)
        {
            if(s[i]!=s[i-1])
                flag=1;
        }
        if(flag==1)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';

    }
    return 0;

    
}
            