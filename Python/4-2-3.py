def printStarDia(n):
    for i in range(1, int(n)+1):
        print (" "* (n-i), "*" * (2*i-1))
    for j in range(int(n)-1, 0, -1):
        print (" " * (n-j), "*"*(2*j-1))

n = input()
printStarDIa(n)
