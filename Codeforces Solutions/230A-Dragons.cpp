#include <bits/stdc++.h>
using namespace std;

int main(void){
  int s,n,flag;
  pair<int,int>arr[1000];
  cin >> s >> n;
  for(int i=0;i<n;i++){
    cin >> arr[i].first >> arr[i].second;
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    flag = 1;
    if(s <= arr[i].first){
      flag = 0;
      break;
    }else{
      s+=arr[i].second;
    }
  }
  if(flag==0) cout << "NO" << endl;
  else cout << "YES" << endl;
  return 0;
}

	
	

