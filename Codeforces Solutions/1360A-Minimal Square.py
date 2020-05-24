for _ in range(int(input())):
    a, b = map(int, input().split())
    if a==b:
        print((a+b)**2)
    elif max(a,b)%min(a,b)==0:
        print(max(a,b)**2)
    else:
        ans=max(max(a,b),2*min(a,b))
        print(ans**2)
    


    
