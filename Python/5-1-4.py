import random

def getRandomString(n):
   res = []
   list = [random.randint(97,122) for i in range(int(n))]
   for i in list:
      res.append(chr(i))
   st = "".join(res)
   return st

n = input()

print(getRandomString(n))
