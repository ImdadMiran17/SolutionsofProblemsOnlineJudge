#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    char s1[101],s2[101];
    cin >> s1 >> s2;
    int i,x,len1,len2;
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<len1;i++)
    {
        if(s1[i]>=65 && s1[i]<=90)
        {
            s1[i]='a'+s1[i]-'A';
        }
    }

    for(i=0;i<len2;i++)
    {
        if(s2[i]>=65 && s2[i]<=90)
        {
            s2[i]='a'+s2[i]-'A';
        }
    }

    x=strcasecmp(s1,s2);
    if(x>0)
        cout << "1" << endl;
    else if(x<0)
        cout << "-1" << endl;
    else
        cout << "0" << endl;
    return 0;
}
