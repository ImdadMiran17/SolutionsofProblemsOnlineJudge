#include <bits/stdc++.h>
using namespace std;

int n, k;
int arr[107];
int res;
int problem = 1, pagenum;

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= arr[i]; j++) {
            if (j == problem) {
                res++;
            }
            pagenum++;
            if (j == arr[i] || pagenum == k) {
                pagenum = 0;
                problem++;
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
