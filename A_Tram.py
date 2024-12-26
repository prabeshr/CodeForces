def solve():
    max = 0
    a = int(input())
    count = 0
    for _ in range(a):
        numbers = list(map(int, input().split()))
        count -=numbers[0]
        count += numbers[1]
        if(count>max):
            max = count
    print(max)
        

solve()