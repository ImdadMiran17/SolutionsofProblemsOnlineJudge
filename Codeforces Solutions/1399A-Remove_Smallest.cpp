#include <bits/stdc++.h>
using namespace std;


int main(void){
  #ifdef _DEBUG
          freopen("input.txt","r",stdin);
//        freopen("output.txt","w",stdout);
  #endif

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &it : arr){
      cin >> it;
    }
    sort(arr.begin(),arr.end());
    bool ok = true;
    for(int i=1;i<n;i++){
      ok &=(arr[i] - arr[i-1] <= 1);
    }
    if(ok)cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}

	
	

