#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,n, sum = 0, x, y;
    double arr[100];
    for(i = 0 ; i<100; i++)
        scanf("%lf",&arr[i]);
    for(i = 0; i<100; i++){
        if(arr[i] < 11)
            printf("A[%d] = %.1lf\n",i,arr[i]);
    }
    return 0;
}
