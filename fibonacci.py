# n = int(input())
def fibonacci(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    elif n == 0:
        return "Error!"
    else:
        return fibonacci(n-1) + fibonacci(n-2)
number = int(input())
print(fibonacci(number))
