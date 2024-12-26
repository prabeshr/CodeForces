def solve():
    n = int(input())
    numbers = list(map(int, input().split()))
    count = 0
    max = 0
    max_sub = 0
    j = 0
    while(j<n):
        if(numbers[j]>=max):
            max = numbers[j]
            count +=1
        else:
            count = 1
            max = numbers[j]
            
        if(count>max_sub):
            max_sub = count
        j+=1
    print(max_sub)
    



solve()
