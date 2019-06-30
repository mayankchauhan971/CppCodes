def rotate(array, n):
  taken = array[0:n]
  remaining = array[n:len(array)]
  array = remaining + taken

  return array

t = int(input())

for _ in range(0, t):
  [_, n] = [int(i) for i in input().split()]
  array = input().split()
  rotated_array = rotate(array, n)
  print(" ".join(rotated_array))
