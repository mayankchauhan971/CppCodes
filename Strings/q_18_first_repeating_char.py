# GOT TLE
#
def first_repeated_char(string):
    chars = []
    indexes = []

    for i in range(len(string)):
        j = i + 1
        while j < len(string):
            if string[i] == string[j]:
                chars.append(string[i])
                indexes.append(j)


            j += 1

    if not len(chars):
        return -1

    return chars[indexes.index(min(indexes))]

def first_repeated_char_simplest(string):
    h = dict()

    for char in string:
        if char in hash:
            return char
        else:
            h[char] = 0

    return -1

t = int(input())

for _ in range(t):
    string = input()

    print(first_repeated_char_simplest(string))
