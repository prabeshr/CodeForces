def solve():
    n = int(input())  
    for _ in range(n):
        number = int(input())  
        while number > 0:
            digits = [int(digit) for digit in str(number)]
            modified = False  
            
            for j in range(len(digits) - 1):
                if digits[j] == digits[j + 1] == 3:
                    digits = digits[:j] + digits[j + 2:]
                    modified = True
                    break
            
            if modified:
                number = int("".join(map(str, digits))) if digits else 0
            elif number >= 33:
                number -= 33
            else:
                break

        if number == 0:
            print("YES")
        else:
            print("NO")

solve()
