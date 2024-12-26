def solve():
    numbers = int(input())
    count = 1
    while numbers>3:
        count *=2
        numbers //=4
    return count
    
    


t = int(input())
for _ in range(t):
    print(solve())
