#include <bits/stdc++.h>
using namespace std;


int main(void){
  int t;
  cin >> t;
  while(t--){
    int n,d;
    scanf("%d %d",&n,&d);
    vector<int>a(n);
    for(int& x:a) {
      scanf("%d",&x);
    }
    sort(a.begin(),a.end());

    cout << (a.back() <= d || a[0]+a[1] <= d ? "YES":"NO") << endl;
  }
  return 0;
}

	
	

