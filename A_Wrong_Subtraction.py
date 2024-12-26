def solve():
    numbers = list(map(int, input().split()))
    n = numbers[0]
    k = numbers[1]
    for _ in range(k):
        if n %10 !=0:
            n -=1
        else:
            n = n//10
    
    print(n)
solve()