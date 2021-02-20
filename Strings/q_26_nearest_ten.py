def nearest_multiple_of_ten(n):
    if len(n) == 1:
        if int(n) <= 5: return 0
        else: return 10

    last_n = int(n[-1])

    if last_n <= 5:
        return int(n) - last_n

    return int(n) + (10 - last_n)

t = int(input())

for _ in range(t):
    print(nearest_multiple_of_ten(input()))
