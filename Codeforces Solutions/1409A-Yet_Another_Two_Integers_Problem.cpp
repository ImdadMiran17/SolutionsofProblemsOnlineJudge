#include <bits/stdc++.h>
using namespace std;


int main(void){
  int t,a,b,ans;
  cin >> t;
  while(t--){
    cin >> a >> b;
    int d = abs(a-b);
    if(d%10 == 0){
      ans = d/10;
    }else if(d%10 > 0){
      ans = d/10 + 1;
    }
    cout << ans << endl;
  }
  return 0;
}

	
	

