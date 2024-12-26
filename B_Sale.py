def solve():
    n,m = map(int, input().split())
    numbers = list(map(int, input().split()))
    numbers.sort()
    sum = 0
    for i in range(n):
        if(numbers[i]<=0 and i<m):
            sum += numbers[i]*(-1)
    print(sum)


solve()
    
    
 