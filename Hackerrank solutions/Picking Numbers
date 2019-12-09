#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,i,j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    vector<int>count(n,0);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])<=1)
                count[i]++;
            else
                break;
        }
    }
     cout << *max_element(count.begin(),count.end())<< endl;
    return 0;
}
