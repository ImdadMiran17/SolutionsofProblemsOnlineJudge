for _ in range(int(input())):
    n, k = map(int, input().split())
    aInput = input()
    a = list(map(int, aInput.split()))
    bInput = input()
    b = list(map(int, bInput.split()))
    while k > 0:
        a.sort()
        b.sort()
        if a[0] < b[n - 1]:
            a[0] , b[n-1] = b[n-1] , a[0]
        k -= 1
    sumOfa = sum(a)
    print(sumOfa)


