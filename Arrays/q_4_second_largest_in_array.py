#code
def second_max_number(array):
    max_number = int(array[0])
    second_max_number = 0
    
    for i in range(1, len(array)):
        n = int(array[i])

        if n > max_number:
          second_max_number = max_number
          max_number = n
        elif n > second_max_number:
          second_max_number = n 

    return second_max_number

t = int(input())

for _ in range(0, t):
    n = int(input())
    array = input().split()
    
    print(second_max_number(array))