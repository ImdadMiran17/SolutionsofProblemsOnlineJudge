#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,n=s.size(),m=0,c=0,k=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                c=i;
                break;
            }

        }
        for(i=n-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                k=i;
                break;
            }

        }
        for(i=c; i<=k; i++)
        {
            if(s[i]=='0')
                m++;
        }

        if(c==k)
            cout<<0<<endl;
        else
            cout<<m<<endl;
    }
    return 0;
}
