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
        int i,l=s.size(),cnt=0,zero1=0,zero2=0;
        for(i=0; i<l; i++)
        {
            if(s[i]=='1')
            {
                zero1=i;
                break;
            }

        }
        for(i=l-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                zero2=i;
                break;
            }

        }
        for(i=zero1; i<=zero2; i++)
        {
            if(s[i]=='0')
                cnt++;
        }

        if(zero1==zero2)
            cout<<0<<endl;
        else
            cout<<cnt<<endl;
    }
    return 0;
}
