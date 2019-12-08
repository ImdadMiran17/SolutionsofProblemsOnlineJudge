#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int q,x,y,z,catA,catB,c1=0,c2=0;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        catA=abs(x-z);
        catB=abs(y-z);
        if(catA>catB)
            cout << "Cat B" << endl;
        else if(catA<catB)
            cout << "Cat A" << endl;
        else
            cout << "Mouse C" << endl;


    }
   /* if(c2>0)
        cout << "Cat B" << endl;
    else if(c1>0)
        cout << "Cat A" << endl;
    else
        cout << "Mouse C" << endl;
        */

    return 0;
}
