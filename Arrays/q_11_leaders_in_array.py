# O(n)

def find_leaders(array, size):
  most_right_index = length - 1
  leaders = []
  last_leader = None

  while size != 0:
    current_index = size - 1
    current_element = array[current_index]
    
    if current_index == most_right_index:
      leaders = [current_element] + leaders
      last_leader = current_element
    elif int(current_element) >= int(last_leader):
      leaders = [current_element] + leaders
      last_leader = current_element

    size = size - 1

  return leaders
  
t = int(input())

for _ in range(0, t):
    # skip input
    length = int(input())
    
    array = input().split()
    result = find_leaders(array, length)
    
    print(" ".join(result))