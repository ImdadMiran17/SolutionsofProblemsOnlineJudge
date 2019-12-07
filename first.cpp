#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    long long int x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    while(true)
    {
        if(x1>x2 && v1>v2 || x2>x1 && v2>v1 || v1==v2)
            {
                cout << "NO" << endl;
                break;
            }
        if((x1+=v1)==(x2+=v2))
        {
                cout << "YES" << endl;
                break;
        }
    }
    return 0;
}
