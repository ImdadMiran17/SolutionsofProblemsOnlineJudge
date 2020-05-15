for _ in range(int(input())):
    n = int(input())
    if n % 4 == 0:
      print("YES")
      for i in range(1,n//2+1):
        print(i*2,end=" ")
      for i in range(1,n//2):
        print(i*2-1,end=" ")
      print(3*(n//2)-1)
    else:
      print("NO")

