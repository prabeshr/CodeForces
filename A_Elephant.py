def solve():
    numbers = int(input())
    
    a = numbers%5
    b  = int(numbers//5)
    if(a==0):
        print(b)
    else:
        print(b+1)
        
solve()