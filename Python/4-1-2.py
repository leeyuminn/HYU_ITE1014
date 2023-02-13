

a = input()
b = input()

def add(a, b):
    return(int(a)+int(b))
S = add(a, b)

def sub(a, b):
    return(int(a)-int(b))
D = sub(a, b)

def mul(a, b):
    return(int(a)*int(b))
P = mul(a, b)

def div(a, b):
    return(int(a)/int(b))
DI = div(a, b)

def mod(a, b):
    return(int(a)%int(b))
R = mod(a, b)

def printMsg():
    print('completed')

print("sum: %d" % (S))
print("differrence: %d" %(D))
print("product: %d" %(P))
print("division: %f" %(DI))
print("remainder: %d" %(R))

printMsg()
