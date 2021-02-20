def sort_str_desc(string):
  max_char = 26
  a_char_order = 97
  char_count = [0] * max_char

  for i in string:
    # set count of each character
    # indexes: 0 = a, 1 = b ... 25 = z
    char_count[abs(a_char_order - ord(i))] += 1

  new_str = ""
  while len(char_count):
    idx = len(char_count) - 1
    count = char_count.pop()

    for j in range(0, count):
      # character a = index + 97
      # a = 0 + 97
      # char(97) == 'a'
      # char(98) == 'b'
      new_str += chr(a_char_order + idx);

  return new_str


t = int(input())

for _ in range(0, t):
    string = input()

    print(sort_str_desc(string))
