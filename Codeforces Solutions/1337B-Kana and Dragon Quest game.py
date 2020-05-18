for _ in range(int(input())):
    x, n, m = map(int, input().split())
    if x <= m * 10:
        print("YES")
    else:
        while n > 0:
            x = x // 2 + 10
            n -= 1

        x = x - m * 10
        if x <= 0:
            print("YES")
        else:
            print("NO")
