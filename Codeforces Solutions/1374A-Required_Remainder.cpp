#include <bits/stdc++.h>
using namespace std;


int main(void){
  int x,y,n,t;
  cin >> t;
  while(t--){
    cin >> x >> y >> n;
    if(n - n%x + y <= n) cout << n - n%x + y << endl;
    else if(n - n%x -(x-y) <= n) cout << n - n%x - (x - y) << endl;
  }
  return 0;
}

	
	

