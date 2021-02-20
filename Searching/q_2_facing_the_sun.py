def building_see_sunrise(array):
    last_tallest = 0
    count = 0

    for i in array:
        current_building = int(i)
        if current_building > last_tallest:
            last_tallest = current_building
            count += 1

    return count


t = int(input())

for _ in range(t):
    input()

    array = input().split()
    print(building_see_sunrise(array))
