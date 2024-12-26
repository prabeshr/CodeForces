def solve():
    numbers = list(input())
    if(numbers[0]=='-'):
        if(numbers[-1]>numbers[-2]):
            numbers.pop(-1)
        else:
            numbers.pop(-2)
    print(int("".join(numbers)))
solve()
    
    
 