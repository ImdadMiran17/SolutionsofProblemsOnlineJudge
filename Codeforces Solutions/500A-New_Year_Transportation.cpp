#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n,t;
  scanf("%d %d",&n,&t);
  int arr[n];
  for(int i=1;i<n;i++){
    scanf("%d",&arr[i]);
  }
  arr[n] = 1;
  for(int j=1;j<=n;j+=arr[j]){
    if(j == t){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}

	
	

