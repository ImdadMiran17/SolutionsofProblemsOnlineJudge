#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n;
  cin >> n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int ans = 0;
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++){
    ans+=abs(arr[n-1]-arr[i]);
  }
  cout << ans << endl;
  return 0;
}

	
	

