#code
def is_prime(n):
  if n <= 1:
    return False
  elif n <= 3:
    return True

  if n % 2 == 0:
    return False

  for i in range(3, n):
    if i % 2 == 0:
      continue;
    res = n / i
    
    if res.is_integer():
      return False;
  
  return True;
  
def print_prime_up_to(n):
  primes_list = []
  for i in range(0, n):
    is_n_prime = is_prime(i)
    
    if is_n_prime:
      primes_list.append(str(i))
            
  " ".join(primes_list)
  
t = int(input())

for _ in range(0, t):
  n = int(input())
  
  print_prime_up_to(n)
    