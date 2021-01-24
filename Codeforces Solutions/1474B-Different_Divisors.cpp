#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x;
  cin >> x;
  vector<int>arr;
  for(int i=x+1; ;i++){
    int t = 1;
    for(int j=2; j*j<=i; j++){
      if(i%j == 0){
        t = 0;
        break;
      }
    }
    if(t){
      arr.push_back(i);
      break;
    }
  }

  for(int i=arr.back()+x; ;i++){
    int t = 1;
    for(int j=2; j*j<=i; j++){
      if(i%j == 0){
        t=0;
        break;
      }
    }
    if(t){
      arr.push_back(i);
      break;
    }
  }

  cout << min(1ll * arr[0] * arr[1], 1ll * arr[0] * arr[0] * arr[0]) << endl;

}

int main(void){

  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}

	
	

