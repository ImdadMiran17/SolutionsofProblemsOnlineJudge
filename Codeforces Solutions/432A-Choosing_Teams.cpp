#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n,k,cnt=0;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    if((arr[i]+k)<=5){
      cnt++;
    }
  }

  cout << cnt/3 << endl;
  return 0;
}

	
	

