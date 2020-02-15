#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,m;
    cin >> n >> m;
    int f[m],i,ans;
    for(i=0;i<m;i++)
    {
        scanf("%d",&f[i]);
    }
    sort(f,f+m);
    ans=f[n-1]-f[0];
    for(i=0;i<=m-n;i++)
    {
        if(f[i+n-1]-f[i]<ans)
            ans=f[i+n-1]-f[i];
    }

    cout << ans << endl;
    return 0;
}
