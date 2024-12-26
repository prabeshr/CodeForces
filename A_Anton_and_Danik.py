def solve():
    number = int(input())
    word = input()
    d = list(word)
    A = 0
    for i in range(number):
        if(d[i]=="A"):
            A+=1
    if(2*A>number):
        print("Anton")
    elif(2*A<number):
        print("Danik")
    else:
        print("Friendship")
        

solve()