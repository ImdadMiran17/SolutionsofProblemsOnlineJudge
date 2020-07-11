def primeCount(num):
  primes = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97];
  p=1
  i=0
  while True:
    p=p*primes[i]
    if p>num:
      return i
    i=i+1
  

q = int(input()) 
for i in range(q):
  n = int(input())
  res = primeCount(n);
  print(res);
    
 

