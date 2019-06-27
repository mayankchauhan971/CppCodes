def factorial(n):
    res = 1
    for i in range(1, n+1):
        res = res * i
    
    return res
    
for i in range(0, int(input())):
    n = int(input())
    print(factorial(n))