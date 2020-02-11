#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int matrix[5][5];
    int i,j,in1,in2,step;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1)
            {
                in1=i;
                in2=j;
            }
        }
    }
    step=abs(in1-2)+abs(in2-2);

    cout << step << endl;
    return 0;
}
