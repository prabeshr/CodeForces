def solve():
    numbers = list(map(int, input().split()))
    n = numbers[0]
    m = numbers[1]
    count =0
    while(m>0 and n>0):
        m -=1
        n -=1
        count +=1
    if(count%2 ==0):
        print("Malvika")
    else:
        print("Akshat")
    



solve()