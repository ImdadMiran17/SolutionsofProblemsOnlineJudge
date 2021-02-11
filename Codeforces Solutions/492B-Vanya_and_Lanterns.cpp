#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,l,radMin,i;
  scanf("%d %d",&n,&l);
  vector<int> vect(100500);
  for(i=0;i<n;i++){
    scanf("%d",&vect[i]);
  }
  sort(vect.begin(),vect.begin()+n);
  radMin = 2*max(vect[0],l-vect[n-1]);
  for(i=0;i<n-1;i++){
    radMin = max(radMin,vect[i+1]-vect[i]);
  }
  
  printf("%f\n",radMin/2.);
  return 0;
}

	
	

