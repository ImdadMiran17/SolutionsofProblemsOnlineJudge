#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,p;
    float sum=0,per,result;
    cin >> n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=(float)arr[i]/(float)100;
    }

    per=sum/n;
    result=per*100;
    printf("%.12f\n",result);
    return 0;
}
