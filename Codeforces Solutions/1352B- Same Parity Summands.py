for _ in range(int(input())):
    n, k = map(int, input().split())
    
    n1 = n - (k - 1)
    if n1 > 0 and n1 % 2 == 1:
        print("YES")
        for _ in range(k - 1):
            print(1, end=" ")
        print(n1)
        continue

    n2 = n - 2 * (k - 1)
    if n2 > 0 and n2 % 2 == 0:
        print("YES")
        for _ in range(k - 1):
            print(2, end=" ")
        print(n2)
        continue

    print("NO")
