def solve():
    word = input()
    d = list(word)
    e = set()
    result = []
    for i in range(0,len(d)):
        if(word[i:i+3]=="WUB"):
            e.add(i)
            e.add(i+1)
            e.add(i+2)
    for i in range(len(d)):
        if i not in e:
            result.append(d[i])
        else:
            result.append(" ")
    worr = ''.join(result)
    d = worr.split()
    print(' '.join(d))
solve()




