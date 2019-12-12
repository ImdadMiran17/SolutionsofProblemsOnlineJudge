#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int N;
    cin >> N;
    int B[N],i,coun=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<N-1;i++)
    {
        if(B[i]%2!=0)
        {
            B[i]+=1;
            B[i+1]+=1;
            coun+=2;
        }
    }

    for(i=0;i<N;i++)
    {
        if(B[i]%2!=0)
            {
                printf("NO\n");
                return 0;
            }

    }

    cout << coun << endl;
    return 0;
}
