def max_diff(array, n):
  maxdiff = -1
  for i in range(n):
    j = n - 1
    while j > i:
      if array[j] >= array[i] and maxdiff < (j - i):
        maxdiff = j - i
      j -= 1

  return maxdiff

t = int(input())

for _ in range(t):
    n = int(input())
    array = input().split()

    print(max_diff(array, n))
