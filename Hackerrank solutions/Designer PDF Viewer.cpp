#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int height=-1,ht[26],i,j;
    string str;
    for(i=0;i<26;i++)
    {
        scanf("%d",&ht[i]);
    }
    cin >> str;
    int len=str.length();
    for(i=0;i<len;i++)
    {
        if(ht[str[i]-'a']>height)
            height=ht[str[i]-'a'];
    }

    cout << height*len << endl;
    return 0;
}
