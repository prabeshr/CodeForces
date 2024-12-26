def solve():
    numbers = list(map(int, input().split()))
    heights = list(map(int, input().split()))
    
    n = numbers[0]
    h = numbers[1]
    count = 0
    for i in range(n):
        if(heights[i]<=h):
            count +=1
        else:
            count +=2
    print(count)
solve()




