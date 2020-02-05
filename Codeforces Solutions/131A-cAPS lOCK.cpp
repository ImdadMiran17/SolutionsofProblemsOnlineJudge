#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string str;
    char c;
    bool tof=true;
    int i,j,n;
    cin >> str;
    n=str.length();
    for(i=1;i<n;i++)
    {
        if(islower(str[i]))
            tof=false;
    }

    if(tof==true)
    {
        for(j=0;j<n;j++)
        {
            if(isupper(str[j]))
                c=tolower(str[j]);
            else
                c=toupper(str[j]);
            cout << c ;
        }
    }
    else
        cout << str;
    return 0;
}

