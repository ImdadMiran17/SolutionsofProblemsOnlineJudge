for _ in range(int(input())):
    n, m = map(int, input().split())
    for i in range(n):
        if i == 0:
            print('B' * m)
        else:
            print('W' + 'B' * (m - 1))
