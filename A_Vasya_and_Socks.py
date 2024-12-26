def solve():
    n,m= map(int, input().split())
    total = n
    k = 1
    while(total>=k*m):
        total +=1
        k +=1
    print(total)
    
solve()


    
    
 