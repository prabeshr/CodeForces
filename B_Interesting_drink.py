from bisect import bisect_right

def solve():
    a = int(input())
    numbers = list(map(int, input().split()))
    numbers.sort()

    b = int(input())
    for _ in range(b):
        num = int(input())
        count = bisect_right(numbers, num)
        print(count)

solve()
