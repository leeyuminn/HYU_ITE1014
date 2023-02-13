def com(n,r):
    if r==n or r==0:
        return 1
    else:
        return com(n-1,r-1)+com(n-1,r)

n, r = input().split()
n=int(n)
r=int(r)
print(com(n,r))
