def uncommon_chars(string1, string2):
  chars = []
  for i in string2:
    if i not in string1 and i not in chars:
      chars.append(i)

  for i in string1:
    if i not in string2 and i not in chars:
      chars.append(i)


  return "".join(sorted(chars))

t = int(input())

for _ in range(t):
    str1 = input()
    str2 = input()

    print(uncommon_chars(str1, str2))
