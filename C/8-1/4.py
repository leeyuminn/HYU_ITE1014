n = input()
n = int(n)
def S(n):
    if n ==1:
        return 1
    else:
        return n + S(n-1)
print( S(n) )
