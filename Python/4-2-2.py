def printStarDia():
    print('* Number of divisors *')
    
def getNumOfDivisors(number):
    res=0
    for i in range(1, int(number)+1):
        if int(number)%i ==0:
            res+=1
    return res

printStarDia()
num1 = input('Type the first number:\n')
num2 = input('Type the second number:\n')
print('Number of divisors of the first number is',getNumOfDivisors(num1))
print('Number of divisors of the second number is',getNumOfDivisors(num2))

