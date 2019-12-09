#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n;
    cin >> n;
    int like=2,result=2;
    n=n-1;
    while(n--)
    {
        like*=3;
        like=like/2;
        result+=like;
    }
    cout << result << endl;

    return 0;
}
