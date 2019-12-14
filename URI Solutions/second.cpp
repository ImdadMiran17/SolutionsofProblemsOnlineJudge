#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, c, m;
    int a, b;
    double ac, bc;
    cin >> n;
    for(m=1; m<=n; m++)
    {
        c = 0;
        cin >> a >> b >> ac >> bc;
        while(a <= b)
        {
            a *= (ac / 100.0) + 1.0;
            b *= (bc / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c <= 100)
            printf("%d anos.\n", c);
    }
    return 0;
}
