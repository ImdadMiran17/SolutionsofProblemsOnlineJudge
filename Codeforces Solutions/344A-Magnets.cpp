#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,cnt=0;
    cin >> n;
    int str[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[i+1])
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}

