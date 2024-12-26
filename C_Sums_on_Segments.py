def solve():
    a = int(input())
    numbers = list(map(int, input().split()))
    e= set()
    e.add(0)
    for i in range(a):
        for j in range(i,a):
            e.add(sum(numbers[i:j+1]))
            
    print(len(e))
    f = sorted(e)
    print(*f)
    

a = int(input())
for _ in range(a):
    solve()

from sortedcontainers import SortedSet 

def solve():
    a = int(input())  
    numbers = list(map(int, input().split()))  
    unique_sums = SortedSet([0]) 
    prefix_sum = 0  
    prefix_sums = {0}  
    
    for num in numbers:
        prefix_sum += num
        for prev_sum in prefix_sums:
            unique_sums.add(prefix_sum - prev_sum)
        prefix_sums.add(prefix_sum)
    
    print(len(unique_sums))
    
    sorted_sums = sorted(unique_sums)
    print(*sorted_sums)

a = int(input())
for _ in range(a):
    solve()

