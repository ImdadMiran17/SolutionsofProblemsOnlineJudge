for _ in range(int(input())):
    n, k = map(int, input().split())
    if n % 2 == 0:
        n += 2 * k
    else:
        if k == 1:
            n = 2 * n
        else:
            backUp = 0
            for i in range(3, n + 1, 2):
                if n % i == 0:
                    backUp = i
                    break
            n = n + backUp

            n+=2*(k-1)
    print(n)
