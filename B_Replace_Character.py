def solve():
    n = int(input())
    for _ in range(n):
        hashmap = {}
        a = int(input())
        str = input()
        for j in range(a):
            if str[j] in hashmap:
                hashmap[str[j]] +=1
            else:
                hashmap[str[j]] =1
                
        sorted_dict = dict(sorted(hashmap.items(), key=lambda item: item[1]))
        last_key = next(reversed(sorted_dict))
        first_key = next(iter(sorted_dict))
        str = list(str) 
        for j in range(a):
            if str[j] == first_key:
                str[j] = last_key
                break
        str = ''.join(str)
        print(str)
        
solve()
        
                


        
            