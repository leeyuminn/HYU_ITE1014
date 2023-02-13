n = input()


def addTotal():
    b = 0
    for a in range(1,int(n)+1):
        b=b+a
    return b


print('addTotal(): %d' %(addTotal()))

def mulTotal():
    global gMul
    gMul=1
    for a in range(1,int(n)+1):
        gMul = gMul * a
mulTotal()
print('gMul:',gMul)
