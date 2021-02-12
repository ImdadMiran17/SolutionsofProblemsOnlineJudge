#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,m;
  cin >> n >> m;
  int initial = 1;
  long long int time = 0;
  while(m--){
    int current;
    scanf("%d",&current);
    if(current>=initial){
      time+=current-initial;
    }else{
      time+=n-(initial-current);
    }
    initial = current;
  }
  cout << time << endl;
  return 0;
}

	
	

