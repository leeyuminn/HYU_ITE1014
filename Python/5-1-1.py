name1, score1 = input().split()
name2, score2 = input().split()
name3, score3 = input().split()
name4, score4 = input().split()
name5, score5 = input().split()

myDict = {name1:score1, name2:score2, name3:score3, name4:score4, name5:score5}


print("Which student's score?")

a = input()
if myDict.get(a):
   print(a + "'s score: " + myDict[a])
else:
   print(a +' is not in the database.')


