def solve():
    numbers = int(input())
    count = 0
    while(numbers>1):
        if numbers%6==0:
            numbers //=6
        else:
            numbers *=2
        if(numbers>1):
            if sum(map(int, str(numbers)))%3 !=0:
                return -1
        
        
        count +=1
        
    return count
    


a = int(input())
for _ in range(a):
    print(solve())
    
    
 