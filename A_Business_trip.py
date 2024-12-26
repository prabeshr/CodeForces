def solve():
    k = int(input())
    numbers = list(map(int, input().split()))
    numbers.sort(reverse=True)
    count = 0
    i = 0
    sum = 0
    while(sum<k and count<12):
        sum += numbers[count]
        count +=1
    if(count>=12 and sum<k):
        return -1
    else:
        return count
print(solve())
    
    
 