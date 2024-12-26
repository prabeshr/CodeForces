def solve():
    n = int(input())
    word = input()
    left = 0
    right = 0
    count= 0
    for i in range(n):
        if word[i]=='(':
            left +=1
        if word[i]==')':
            right +=1
        if right>left:
            count = max(count,right-left)
    print(count)
    
t = int(input())
for _ in range(t):
    solve()
