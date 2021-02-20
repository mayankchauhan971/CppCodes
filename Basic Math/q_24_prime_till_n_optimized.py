def sieve_era(n):
  prime = [True for i in range(n + 1)]

  p = 2

  while (p * p <= n):
    if prime[p] == True:
      for i in range(p * p, n+1, p):
        prime[i] = False
      
    p = p + 1
  
  final_primes = []
  for i in range(2, n+1):
    if prime[i] == True:
      final_primes.append(str(i))
  
  print(" ".join(final_primes))
  
t = int(input())

for _ in range(0, t):
  n = int(input())
  
  sieve_era(n)