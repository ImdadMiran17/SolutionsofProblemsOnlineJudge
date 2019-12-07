#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,i,beshi=0,kom=0,min,max;
    scanf("%d",&n);
    long long int scores[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&scores[i]);
    }
    min=scores[0];
    max=scores[0];
    for(i=1;i<n;i++)
    {
       if(scores[i]>max )
            {
                max=scores[i];
                beshi++;
            }
       else if(scores[i]<min)
            {
                min=scores[i];
                kom++;
            }
    }

    cout << beshi << " " << kom << endl;
    return 0;
}
