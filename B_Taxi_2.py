def solve():
    hashmap = {1: 0, 2: 0, 3: 0, 4: 0}
    a = int(input())
    
    numbers = list(map(int, input().split()))
    
    for num in numbers:
        hashmap[num] += 1
    count = hashmap[4] 
    hashmap[4] = 0

    count += hashmap[2] // 2
    if hashmap[2] % 2 != 0:
        hashmap[2] = 1
    else:
        hashmap[2] = 0

    if hashmap[3] >= hashmap[1]:
        count += hashmap[3]
        hashmap[1] = 0
    else:
        count += hashmap[3]
        hashmap[1] -= hashmap[3]
    if hashmap[2] == 1:
        count += 1
        hashmap[1] -= min(hashmap[1], 2)

    if hashmap[1] > 0:
        count += (hashmap[1] + 3) // 4

    print(int(count))

solve()