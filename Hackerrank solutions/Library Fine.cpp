#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int d1,d2,m1,m2,y1,y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    if(d1>d2 && m1==m2 && y1==y2)
        cout << (d1-d2)*15 << endl;
    else if(m1>m2 && y1==y2)
        cout << (m1-m2)*500 << endl;
    else if(y1>y2)
        cout << (y1-y2)*10000 << endl;
    else
        cout << "0" << endl;
    return 0;
}
