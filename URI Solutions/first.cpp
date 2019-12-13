#include <bits/stdc++.h>
using namespace std;

int main(void)
{
 float A, B, C, areaTraphisium, perimeterTriangle ;

    cin >> A >> B >> C;

    if ((A < (float)(B+C)) && (B < (float)(A+C)) && (C < (float)(B+A)))
    {
        perimeterTriangle = A + B + C;
        printf("Perimetro = %.1f\n",perimeterTriangle);


    }
    else
    {
        areaTraphisium = ((A + B) * C) / 2;
        printf("Area = %.1f\n",areaTraphisium);
    }
    return 0;
}
