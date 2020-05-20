for _ in range(int(input())):
    n = int(input())
    a = input()
    listi = list(map(int, a.split()))
    listi.sort()
    cop = []
    left = 0
    right = n - 1
    cnt = 1
    ans = []
    while left <= right:
        if cnt % 2 == 0:
            cop.append(listi[left])
            left += 1
        else:
            cop.append(listi[right])
            right -= 1
        cnt += 1
    cop.reverse()
    ans.append(cop)
    for element in ans:
        print(*element, end=' ')
    print()
    
