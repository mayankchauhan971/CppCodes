#code
def reverse(array):
  new_array = []
  size = len(array)

  while size != 0:
    i = array[size - 1]
    new_array.append(i)
    size -= 1

  return new_array

t = int(input())

for _ in range(0, t):
  n = int(input())
  array = input().split()

  print(" ".join(reverse(array)))
