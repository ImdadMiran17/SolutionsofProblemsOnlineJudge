#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long s[4];
    int i,j,cnt=0;
    for(i=0; i<4; i++)
    {
        scanf("%lld",&s[i]);
    }
    sort(s,s+4);
    for(i=0; i<3; i++)
    {
        if(s[i]==s[i+1])
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}
