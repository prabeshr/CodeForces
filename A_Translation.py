def solve():
    t = input()
    s = input()
    if(len(t)!=len(s)):
        return "NO"
    length = len(t)
    for i in range(length):
        if(t[i]!=s[length-1-i]):
            return "NO"
    return "YES"

print(solve())




