for _ in range(int(input())):
    n, k = map(int, input().split())
    ans = (k-1)//(n-1) + k
    print(ans)
    
