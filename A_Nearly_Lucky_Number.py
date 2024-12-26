def solve():
    number = int(input())
    d = []
    e = {4,7,44,47,74,77,444,447,474,477,744,747,774,777}
    while number>0:
        d.append(number%10)
        number //=10
    count =0
    for num in d:
        if num==4 or num==7:
            count +=1
    if(count in e):
        print("YES")
    else:
        print("NO")

solve()




