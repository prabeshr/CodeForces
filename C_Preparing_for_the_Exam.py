def solve():
    
    values = list(map(int, input().split()))
    n = values[0]
    m = values[1]
    k = values[2]
    
    a = list(map(int, input().split()))
    kk = set(map(int, input().split()))
    d = set()
    for i in range(1,n+1):
        if i not in kk:
            d.add(i)
    e = []
    if len(d)>1:
        for i in range(m):
            e.append('0')
        print(''.join(e))
        
    elif len(d)==0:
        for i in range(m):
            e.append('1')
        print(''.join(e))
        
        
    else:
        
        for i in range(m):
            if a[i] in d:
                e.append('1')
            else:
                e.append('0')
        print(''.join(e))
        
        
        
        
    
        
        
        
    
    
    


t = int(input())
for _ in range(t):
    solve()
