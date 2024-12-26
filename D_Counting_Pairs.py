from bisect import bisect_left, bisect_right

def solve():
    values = list(map(int, input().split()))
    n, x, y = values[:3]
    numbers = list(map(int, input().split()))
    
    total = sum(numbers)
    count = 0

    numbers.sort()
    
    for i in range(n):

        target_min = total - x - numbers[i]
        target_max = total - y - numbers[i]
        
        lower_bound = bisect_left(numbers, target_max, 0, i)
        upper_bound = bisect_right(numbers, target_min, 0, i)
        
        count += (upper_bound - lower_bound)
    
    print(count)

t = int(input())
for _ in range(t):
    solve()
