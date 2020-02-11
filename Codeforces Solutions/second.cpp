#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int i;
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
            printf("I hate that ");
        else
            printf("I love that ");
    }
    if(n%2!=0)
       cout << "I hate it"<< endl;
    else
        cout << "I love it"<< endl;
    return 0;
}
