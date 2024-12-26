# Simple Geometric series sum 
def solve():
    numbers = int(input())
    k = 2
    while(1):
        if(numbers%(2**k-1)==0): 
            return numbers//(2**k-1)
        k +=1
        
t = int(input())
for _ in range(t):
    print(solve())
    
    
 