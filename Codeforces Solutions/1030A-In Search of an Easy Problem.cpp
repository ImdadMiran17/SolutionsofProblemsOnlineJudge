#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n],i,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
            cnt++;
    }

    if(cnt>0)
        printf("HARD\n");
    else
        printf("EASY\n");
    return 0;
}
