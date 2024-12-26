def solve():
    number = int(input())
    
    while(number>1):
        if number%2==1:
            return "YES"
        else:
            number = number /2
    return "NO"
        
    

t = int(input())
for _ in range(t):
    print(solve())
