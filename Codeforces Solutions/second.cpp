#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long n,maxx=0;
    cin >> n;
    int i,cnt=1;
    long arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
           {
               if(cnt>maxx)
                 {
                     maxx=cnt;
                 }
                 cnt=1;
           }
        else
            cnt++;

    }
    if(cnt>maxx)
        maxx=cnt;

    cout << maxx << endl;
    return 0;
}

