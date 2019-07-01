NO_OF_CHARS = 256

def anagram_palindrome(str):
  count = [0] * NO_OF_CHARS

  for i in str:
      count[ord(i)] += 1

  odd_count = 0

  for i in range(0, NO_OF_CHARS):
      if count[i] & 1:
          odd_count += 1
      if odd_count > 1:
          return False
  return True

t = int(input())

for _ in range(0, t):
    string = input()

    result = anagram_palindrome(string)

    if result:
        print("Yes")
    else:
        print("No")
