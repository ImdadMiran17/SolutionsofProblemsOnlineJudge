#include<bits/stdc++.h>
using namespace std;

long long digitCount(long long x){
    long long cunt = 0;
    while(x){
        cunt++;
        x/=10;

    }
    return cunt;
}
long long splitNumber(long long x){
    long long temp = 1;
    while(x){
        temp*=10;
        x--;
    }
    return temp;
}
long long check(long long x){
    while(x % 10 == 0)x/=10;
    return x;
}
int main(){

    long long p,q;
    cin >> p >> q;

    bool flag = true;
    for(long long i = p; i <= q; i++){
        long long l,r,digit,sq;

        sq = i*i;
        digit = digitCount(sq);
        digit -= (digit/2);
        l = sq / splitNumber(digit);
        r = sq % splitNumber(digit);
        if((l+r) == i){
            cout << i << " ";
            flag = false;
        }
    }
    if(flag) cout << "INVALID RANGE";
    cout << endl;
    return 0;
}
