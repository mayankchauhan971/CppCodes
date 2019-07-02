CHARS_NUM = 256
def first_non_repeated_char_simplest(string):
    count = [0] * CHARS_NUM

    for char in string:
        count[ord(char)] += 1

    for char in string:
        if count[ord(char)] == 1:
            return char

    return -1

t = int(input())

for _ in range(t):
    input()
    string = input()
    print(first_non_repeated_char_simplest(string))
