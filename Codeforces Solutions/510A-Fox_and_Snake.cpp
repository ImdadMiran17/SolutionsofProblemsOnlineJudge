#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,m;
  cin >> n >> m;
  int oddness = 0;
  for(int i=0;i<n;i++){
    if(i%2 == 0){
      for(int j=0;j<m;j++){
        printf("#");
      }
    }else{
      ++oddness;
      for(int j=0;j<m;j++){
        if(oddness%2 == 1 && j == m-1){
          printf("#");
        }else if(oddness%2 == 0 && j == 0){
          printf("#");
        }else{
          printf(".");
        }
      }
    }
    printf("\n");
  }
  return 0;
}

	
	

