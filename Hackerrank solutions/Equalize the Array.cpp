#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,coun[102]={0},maxi=0,index=0;
    cin >> n;
    int arr[n],i,result=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        coun[arr[i]]++;
        if(coun[arr[i]]>maxi)
            {
                maxi=coun[arr[i]];
                index=arr[i];
            }
    }
    for(i=1;i<=100;i++)
    {
        if(i!=index)
            result+=coun[i];
    }

    cout << result << endl;
    return 0;
}
