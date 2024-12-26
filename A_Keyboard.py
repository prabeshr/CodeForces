def solve():
    shiftPosition = input()
    word = list(input())
    characters = "qwertyuiopasdfghjkl;zxcvbnm,./"
    char_dict_R = {characters[i]: characters[i + 1] for i in range(len(characters) - 1)}
    char_dict_L = {characters[i+1]: characters[i ] for i in range(len(characters) - 1)}
    if(shiftPosition == "L"):
        for i in range(len(word)):
            word[i] = char_dict_R[word[i]]
    if(shiftPosition == "R"):
        for i in range(len(word)):
            word[i] = char_dict_L[word[i]]
    print(''.join(word))
            

solve()
