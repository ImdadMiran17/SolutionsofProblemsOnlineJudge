#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int p,d,m,s;
    cin >> p >> d >> m >> s;
    int i,games=0,dollar=p;
    while(s>=dollar)
    {
        games++;
        s-=dollar;
        dollar=(dollar-d)>=m?(dollar-d):m;
    }

    cout << games << endl;
    return 0;
}
