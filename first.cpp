#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n,p,min=0;
    cin >> n >> p;
    min = (n/2)-(p/2);
    if(min>(p/2))
        min = p/2;

    cout << min << endl;
    return 0;
}
