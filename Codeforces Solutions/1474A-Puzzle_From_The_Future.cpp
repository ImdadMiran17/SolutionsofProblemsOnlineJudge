#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  string a;
  cin >> a;
  string b = "1";

  for(int i=1;i<n;i++){
    if('1' + a[i] != b[i-1] + a[i-1]){
      b+="1";
    }else{
      b+="0";
    }
  }
  cout << b << endl;
}

int main(void){

  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}

	
	

