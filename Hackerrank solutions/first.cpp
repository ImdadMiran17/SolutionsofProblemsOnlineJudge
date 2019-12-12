#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long t;
    cin >> t;
    long long base=3;
    while(t>base)
    {
        t-=base;
        base*=2;
    }
    cout << base-t+1 << endl;
    return 0;
}
