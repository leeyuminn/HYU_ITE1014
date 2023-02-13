def printLine(n) :
    for i in range(1,int(n)+1):
        print(i,' ',end='')
    print()

n = input()

for i in range(1,int(n)+1):
    printLine(i)
    
for i in range(int(n),0,-1):
    printLine(i)
