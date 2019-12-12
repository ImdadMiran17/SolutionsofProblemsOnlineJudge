#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   string s;
   cin >> s;
   int len=s.length();
   int i,counter=0;
   for(i=0;i<len;i++)
   {
       if(s[i]>='A' && s[i]<='Z')
         counter++;
   }
   cout << counter+1 << endl;
    return 0;
}
