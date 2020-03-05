#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m,k,i,c=0,arr[1001];
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            c+=arr[i];
        }
        if(c<=m)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<m<<endl;
        }
    }


}
