#include <bits/stdc++.h>
using namespace std;


int main(void){

  int maxValue=0,minValue=100,maxIndex=0,minIndex=0,n;
  cin >> n;
  for(int i=0;i<n;i++){
    int a;
    scanf("%d",&a);
    if(a>maxValue){
      maxValue = a;
      maxIndex = i;
    }
    if(a<=minValue){
      minValue = a;
      minIndex = i;
    }
  }

  if(maxIndex > minIndex){
    cout << (maxIndex-1)+(n-minIndex)-1 << endl;
  }else{
    cout << (maxIndex-1)+(n-minIndex) << endl;
  }
  return 0;
}

	
	

