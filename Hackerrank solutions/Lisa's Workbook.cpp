#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin>>n>>k;
    int numProblems, specialProblems = 0, pageNumber = 0;
    for(int i = 0; i < n; i++) {
        cin>>numProblems;
        pageNumber++; // increase for new chapter
        int problem = 1;
        while(numProblems > 0) {
            numProblems--;
            if(problem == pageNumber) {
                specialProblems++;
            }
            if(problem%k == 0 && numProblems != 0) {
                pageNumber++; // increase for full page
            }
            problem++;
         }
    }
    cout<<specialProblems;
    return 0;
}
}
