def is_alpha(char):
  order = ord(char)
  if (
    (order >= 48 and order <= 57) or
    (order >= 65 and order <= 90) or
    (order >= 97 and order <= 122)
  ):
    return True

  return False

def filter_str(str):
  return "".join(filter(lambda x: is_alpha(x), str)).lower()

def palindrome(str):
  str = filter_str(str)
  n =  len(str)
  for i in range(0, int(n / 2)):
    a = str[i]
    b = str[(n - i) - 1]
    if a != b:
      return False

  return True

t = int(input())

for _ in range(0, t):
    string = input()

    if palindrome(string):
        print("YES")
    else:
        print("NO")
