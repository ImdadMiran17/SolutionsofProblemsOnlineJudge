for _ in range(int(input())):
    n = int(input())
    a = input()
    candies = list(map(int, a.split()))
    sumAlice = 0
    sumBob = 0
    weightA = 0
    weightB = 0
    left = 0
    right = n - 1
    cnt = 0
    l = 0
    r = n - 1
    while l <= r:
        if cnt % 2 == 0:
            tempA = 0
            while l <= r and tempA <= sumBob:
                tempA = tempA + candies[l]
                l += 1
            weightA = weightA + tempA
            sumAlice = tempA
        else:
            tempB = 0
            while l <= r and tempB <= sumAlice:
                tempB = tempB + candies[r]
                r -= 1
            weightB = weightB + tempB
            sumBob = tempB
        cnt+=1    
    print(cnt, weightA, weightB)
