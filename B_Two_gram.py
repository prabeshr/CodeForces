def solve():
    numbers = int(input())
    string = input()
    hashmap = {}
    for i in range(numbers-1):
        char = string[i:i+2]
        hashmap[char] = hashmap.get(char, 0) + 1
    max = 0
    for item in hashmap:
        if hashmap[item]>max:
            max = hashmap[item]
            word = item
    print(word)

solve()
    
    
 