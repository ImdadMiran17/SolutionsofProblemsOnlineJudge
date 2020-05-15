for _ in range(int(input())):
    n, a, b, c, d = map(int, input().split())
    left = n*(a-b)
    right = n*(a+b)
    if left > (c+d) or right < (c-d):
      print("NO")
    else:
      print("YES")
