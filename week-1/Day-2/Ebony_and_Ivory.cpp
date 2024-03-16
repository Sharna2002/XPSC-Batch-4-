#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<c/a+2;++i)
    {
        for(int j=0;j<c/b+2;++j)
        {
            if(i*a+j*b==c){
                     cout<<"YES"<<endl;
                    return 0;
        }                }
    }
            cout<<"NO"<<endl;
            return 0;
}
