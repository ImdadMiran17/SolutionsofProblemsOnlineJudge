#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    char a[105],b[105];
    int i,l;
    cin >> a >> b;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='0'&& b[i]=='0')
            a[i]='0';
        else if(a[i]=='0' && b[i]=='1')
            a[i]='1';
        else if(a[i]=='1' && b[i]=='0')
            a[i]='1';
        else if(a[i]=='1' && b[i]=='1')
            a[i]='0';
    }

    cout << a << endl;
    return 0;
}
