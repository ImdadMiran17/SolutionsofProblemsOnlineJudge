#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N,K,a,cnt = 0;
        scanf("%d %d",&N,&K);
        for(int i = 0; i < N; i++){
            scanf("%d",&a);
            if(a <= 0)cnt++;
        }
        if(cnt >= K)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
