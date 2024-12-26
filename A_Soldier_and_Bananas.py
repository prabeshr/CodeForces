def solve():
    numbers = list(map(int, input().split()))
    k = numbers[0]
    n = numbers[1]
    w = numbers[2]
    b = int(k*w*(w+1)*0.5-n)
    if b>=0:
        print(b)
    else:
        print(0)
solve()