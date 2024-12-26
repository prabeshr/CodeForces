import math
def solve():
    t = int(input())  
    for _ in range(t):
        n, d = map(int, input().split())
        
        result = []
        result.append(1)
        
        if n >= 3 or d % 3 == 0:
            result.append(3)
        
        if d == 5:
            result.append(5)
        
        if (n >= 3 or d == 7):
            result.append(7)
        
        if n >= 6 or d == 9 or (n>=3 and d%3==0):
            result.append(9)
        print(" ".join(map(str, result)))

solve()
