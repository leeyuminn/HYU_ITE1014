import random

list = [random.randint(0,1000) for i in range(100)]
for i in list:
   print(i,' ', end='')
m = 0
for i in list:
   if(i > m):
      m = i

print('max value : ',m)
