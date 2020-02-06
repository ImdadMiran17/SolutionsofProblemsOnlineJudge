#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,a;
    cin >> n;
    if(n%5==0)
        a=n/5;
    else
        a=(n/5)+1;

    cout << a << endl;
    return 0;
}

