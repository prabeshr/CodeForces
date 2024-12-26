def solve():
    numbers = int(input())
    string= input()
    stack = ['a']
    for i in range(numbers):
        if string[i]=='0' and stack[-1]=='1':
            stack.pop()
        elif string[i]=='1' and stack[-1]=='0':
            stack.pop()
        else:
            stack.append(string[i])
    
    print(len(stack)-1)

solve()
    
    
 