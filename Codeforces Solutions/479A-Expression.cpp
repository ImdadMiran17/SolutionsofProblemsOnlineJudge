#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b,c,result;

    cin >>a >> b >>c;

        result=a+b+c;
        result=max(result,a*b*c);
        result=max(result,(a+b)*c);
        result=max(result,a*(b+c));
        result=max(result,a+(b*c));
        result=max(result,(a*b)+c);

        cout << result << endl;

    return 0;
}
