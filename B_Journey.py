def solve():
    days = list(map(int, input().split()))
    n = days[0]
    days.pop(0)
    
    cycle_sum = sum(days)
    
    full_cycles = n // cycle_sum
    total = full_cycles * cycle_sum
    count = full_cycles * 3  
    
    i = 0
    while total < n:
        total += days[i % 3]
        i += 1
        count += 1
    
    print(count)

a = int(input())
for _ in range(a):
    solve()
