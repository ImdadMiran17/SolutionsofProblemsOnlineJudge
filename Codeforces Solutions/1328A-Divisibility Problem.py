for _ in range(int(input())):
    a, b = map(int, input().split())
    cnt = 0
    if a % b == 0:
        print(0)
    else:
        cnt = b - (a % b)
        print(cnt)
