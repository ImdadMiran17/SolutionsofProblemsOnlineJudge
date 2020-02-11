#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int n,result;
    cin >> n;
    if(n%2==0)
        result=n/2;
    else
        result=-n/2-1;

    cout << result << endl;
    return 0;
}
