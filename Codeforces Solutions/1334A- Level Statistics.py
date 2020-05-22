for _ in range(int(input())):
    n = int(input())
    p = 0
    c = 0
    des = True
    for i in range(n):
        temp1, temp2 = map(int, input().split())
        if temp1 < p or temp2 < c or (temp1 - p) < (temp2 - c):
            des = False
        p = temp1
        c = temp2

    if des:
        print("YES")
    else:
        print("NO")
