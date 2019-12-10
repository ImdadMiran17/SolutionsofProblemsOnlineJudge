#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    string s;
    long long n,count=0,repeat=0,remCount=0,rem,i;
    long long len;
    cin >> s;
    cin >> n;

    len=s.length();
    repeat=n/len;
    rem=n%len;
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
            count++;
        if(s[i]=='a' && i<rem)
            remCount++;
    }

    cout << (count*repeat)+remCount << endl;
    return 0;
}
