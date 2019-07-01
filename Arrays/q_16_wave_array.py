def wave(array):
  for i in range(0, len(array), 2):
    a = array[i]
    b = None
    
    is_index_exists = i+1 < len(array)
    if is_index_exists:
      b = array[i+1]
    
    # if second element of array chunk exists, swap
    if b:
      array[i] = b
      array[i + 1] = a

  return " ".join(array)


t = int(input())

for _ in range(0, t):
    input()
    
    array = input().split()
    print(wave(array))    