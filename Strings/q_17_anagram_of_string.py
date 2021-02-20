def get_minimum_removed_char_anagram(str1, str2):
  CHARS_NUM = 26
  count1 = [0] * CHARS_NUM
  count2 = [0] * CHARS_NUM

  for i in str1:
    count1[ord(i) - ord('a')] += 1

  for i in str2:
    count2[ord(i) - ord('a')] += 1

  total = 0

  for i in range(CHARS_NUM):
    total += abs(count1[i] - count2[i])

  return total
