def solve():
    str = input()
    d = list(str)
    upper = 0
    lower = 0
    for word in d:
        if(ord(word)>91):
            lower +=1
        else:
            upper +=1
    if(upper>lower):
        for i in range(len(d)):
            d[i] = d[i].upper()
        print(''.join(d))
    else:
        for i in range(len(d)):
            d[i] = d[i].lower()
        print(''.join(d))
    
# Range: 'a' to 'z'
# ASCII Values: 97 to 122

# Range: 'A' to 'Z'
# ASCII Values: 65 to 90

solve()




