for _ in range(int(input())):
    n, k = map(int, input().split())
    if n % 2 == 0:               # There are two parts of this solution.Odd and Even. In the Even part, if n==evenNumber then you just
        n += 2 * k                  # have to multiply 2 to k then add n with 2*k.Because as you find about evenNum, you don't have to
    else:                           # add 2 again and again to n.
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
