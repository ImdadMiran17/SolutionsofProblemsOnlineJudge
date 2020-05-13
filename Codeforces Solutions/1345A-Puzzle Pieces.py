for i in range(int(input())):
  n,m = map(int,input().split())
  if n ==1 or m ==1:  #There is no other way that you can build this puzzle following the rules.
    print("YES")
  elif n ==2 and m == 2:
    print("YES")
  else:
    print("NO")
