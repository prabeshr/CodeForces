import math

def solve():
    l, r, G = map(int, input().split())
    
    min_x = math.ceil(l / G)
    max_y = r // G
    

    if min_x <= max_y:
        A = G * min_x
        B = G * max_y
        if(A==B!=G):
            print(-1, -1)
        else:
            print(A, B)
    else:
        print(-1, -1)

t = int(input())
for _ in range(t):
    solve()


