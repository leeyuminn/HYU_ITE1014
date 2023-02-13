num = input().split()
a=num[0]
b=num[1]
c=num[2]

if int(a)>int(b) and int(a)>int(c):
    max=a
elif int(b)>int(a) and int(b)>int(c):
    max=b
else:
    max=c
if int(a)<int(b) and int(a)<int(c):
    min=a
elif int(b)<int(a) and int(b)<int(c):
    min=b
else:
    min=c


print("min: ",end='')
print(min)
print("max: ",end='')
print(max)
