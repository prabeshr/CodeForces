def solve():

    str = input()
    sum = 0
    count2=0
    count3=0
    for j in range(len(str)):
        if(int(str[j])==2):
            count2 +=1
        if(int(str[j])==3):
            count3 +=1
        sum += int(str[j])
    for i in range(count2+1):
        for j in range(count3+1):
            x = sum+2*i+6*j
            if(x%9==0):
                print("YES")
                return
    print("NO")        
        
            
            

a = int(input())

for _ in range(a):
    solve()


