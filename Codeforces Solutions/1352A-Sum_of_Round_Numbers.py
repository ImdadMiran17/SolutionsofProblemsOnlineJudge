for _ in range(int(input())):
    n = int(input())
    ans = []
    base = 1
    while n != 0:
        r = n % 10
        if r != 0:
            ans.append(r * base)
        base *= 10
        n //= 10
 
    print(len(ans))
    print(*ans)
