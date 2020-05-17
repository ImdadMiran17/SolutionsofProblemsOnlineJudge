for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    if a <= b:
        print(b)
    elif a > b and (c - d) <= 0:
        print(-1)
    elif a > b and c > d:
        if (a - b) % (c - d) != 0:
            cn = (a - b) // (c - d) + 1
        else:
            cn = (a - b) // (c - d)
        gotOut = b + cn * c
        print(gotOut)
