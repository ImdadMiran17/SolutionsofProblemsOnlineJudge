#include <bits/stdc++.h>
using namespace std;


int main(void){

  int n;
  cin >> n;
  int h[n],a[n],cnt = 0;
  for(int i=0;i<n;i++){
    scanf("%d %d",&h[i],&a[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i!=j && h[i] == a[j]){
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}

	
	

