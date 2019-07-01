#code
def majority_el(n, array):
    map = dict()

    for i in range(0, len(array)):
        el = array[i]
        if el in map:
            map[el] += 1
        else:
            map[el] = 1

    key = max(map, key=map.get)
    times = map[key]

    if times > n/2:
        return key

    return -1

t = int(input())

for _ in range(0, t):
  n = int(input())
  array = input().split()

  print(majority_el(n, array))
