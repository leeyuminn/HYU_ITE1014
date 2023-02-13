a=input()
while(1):
    if a.isupper():
        print("->%c\n",a+32)
    else if a.islower():
        print("->%c\n",a-32)
    else if 0<=a<=9:
        print("->%c\n",a)
    else:
        print('exit')
    break
