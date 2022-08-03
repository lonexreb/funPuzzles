def isPrime (n):
    for i in range (2, n):
        if (n % i == 0):
            return False
    return True
    
def printPrime (num):
    for i in range (2, num):
        if (isPrime(i)):
            print(i)
            
# Quick Manual Testing

printPrime(10) 

# Expected and tested!
#2
#3
#5
#7
