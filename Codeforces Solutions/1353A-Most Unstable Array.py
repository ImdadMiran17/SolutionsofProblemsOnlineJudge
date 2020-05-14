for _ in range(int(input())):
    n, m = map(int, input().split())     # can't really come into solutions other than n<=2 or n=m
    ans = min(2, n - 1) * m
    print(ans)
