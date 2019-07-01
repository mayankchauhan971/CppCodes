def anagram(str1, str2):
  sortedA = sorted(str1)
  sortedB = sorted(str2)

  if len(sortedA) != len(sortedB):
    return False

  for i in range(0, len(sortedA)):
    if sortedA[i] != sortedB[i]:
      return False

  return True

t = int(input())

for _ in range(0, t):
    [strA, strB] = input().split()

    is_anagram = anagram(strA, strB)

    if is_anagram:
        print("YES")
    else:
        print("NO")
