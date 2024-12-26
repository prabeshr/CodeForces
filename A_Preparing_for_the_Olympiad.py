def solve():
    b = int(input())
    monocrap = list(map(int, input().split()))
    stereocrap = list(map(int, input().split()))
    d = []
    count = monocrap[-1]
    for i in range(b-1):
        d.append(monocrap[i]-stereocrap[i+1])
    e = []
    for i in range(len(d)):
        if d[i]>0:
            e.append(i)
    for idex in e:
        count += monocrap[idex]
        count -= stereocrap[idex+1]
    print(count)

        
        
        
        


a = int(input())
for _ in range(a):
    solve()
