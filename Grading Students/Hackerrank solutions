#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,i,x;
    scanf("%d",&n);
    long long int grades[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&grades[i]);
    }
    for(i=0;i<n;i++)
    {
        x=5-(grades[i]%5);
        if(grades[i]>=38 && x<3)
            cout << grades[i]+x << endl;
        else
            cout << grades[i] << endl;
    }


    return 0;
}
