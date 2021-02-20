def min_max(array):
  min = array[0]
  max = array[0]

  for i in range(0, len(array)):
    value = array[i]
    if value < min:
      min = value
    if value > max:
      max = value
  
  return [min, max]
  
t = int(input())

for _ in range(0, t):
    # skip first input
    input()
    
    # takes array input
    array = [int(i) for i in input().split()]
    [min, max] = min_max(array)
    print(min, max)