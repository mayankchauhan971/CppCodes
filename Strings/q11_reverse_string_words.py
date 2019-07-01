def reverse_words(string):
    arr = string.split(".")
    count = len(arr)
    new_arr = []

    while count:
        word = arr[count - 1]
        new_arr.append(word)
        count -= 1

    return ".".join(new_arr)

t = int(input())

for _ in range(0, t):
    string = input()

    print(reverse_words(string))
