def solve():
    numbers = int(input())
    a = numbers//2020
    b = numbers%2020
    if(b>a):
        return "NO"
    else:
        return "YES"
    

a = int(input())
for _ in range(a):
    print(solve())
    
    
 