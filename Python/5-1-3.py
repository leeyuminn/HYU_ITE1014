s = input()
list = s.split()

dic = {}
for str in list:
    s = dic.get(str)
    if s != None:
        dic[str] = dic[str]+1
    else:
        dic[str] = 1


for k in dic:
    print(k, " : ", dic[k])

