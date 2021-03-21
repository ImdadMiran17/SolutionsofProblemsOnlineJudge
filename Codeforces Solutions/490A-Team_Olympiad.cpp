#include <bits/stdc++.h>
using namespace std;


int main(void){
  int n;
  cin >> n;
  int arr[n],t1[5000],t2[5000],t3[5000],prog = 0,math = 0,pe = 0,teams ;
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    if(arr[i] == 1){
      t1[prog] = i+1;
      prog++;
    }else if(arr[i] == 2){
      t2[math] = i+1;
      math++;
    }else if(arr[i] == 3){
      t3[pe] = i+1;
      pe++;
    }
  }

  teams = min(prog,min(math,pe));
  cout << teams << endl;
  for(prog=0,math=0,pe=0; prog<teams,math<teams,pe<teams; prog++,math++,pe++){
    printf("%d %d %d\n",t1[prog],t2[math],t3[pe]);
  }
  return 0;
}

	
	

