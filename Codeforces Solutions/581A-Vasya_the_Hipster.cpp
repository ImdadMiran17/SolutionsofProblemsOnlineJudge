#include <bits/stdc++.h>
using namespace std;


int main(void){
  int a,b,ans1,ans2;
  cin >> a >> b;
  ans1 = min(a,b);
  ans2 = max((a-min(a,b))/2,(b-min(a,b))/2);
  cout << ans1 << " " << ans2 << endl;
  return 0;
}

	
	

