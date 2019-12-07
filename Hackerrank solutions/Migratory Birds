#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    long long int n;
    cin >> n;
    long long int arr[n];
    int type[6]={0},i,max;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        type[arr[i]]++;
    }
    max=type[1];
    int maxIndex=1;
    for(i=2;i<=5;i++)
    {
        if(type[i]>max)
            {
                max=type[i];
                maxIndex=i;
            }
    }
    cout << maxIndex << endl;
    return 0;
}
