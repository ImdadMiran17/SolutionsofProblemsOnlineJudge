#include <bits/stdc++.h>
using namespace std;

int main(void)
{
 int N, rem;

    cin >> N;

    cout << N << endl;
    printf("%d nota(s) de R$ 100,00\n", N/100);
    rem = (N%100);


    printf("%d nota(s) de R$ 50,00\n", rem/50);
    rem = (rem%50);


    printf("%d nota(s) de R$ 20,00\n", rem/20);
    rem = (rem%20);


    printf("%d nota(s) de R$ 10,00\n", rem/10);
    rem = (rem%10);


    printf("%d nota(s) de R$ 5,00\n", rem/5);
    rem = (rem%5);


    printf("%d nota(s) de R$ 2,00\n", rem/2);
    rem = (rem%2);


    printf("%d nota(s) de R$ 1,00\n", rem/1);
    return 0;
}
