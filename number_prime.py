# A prime number is an integer greater or equal to 2 that is only divisible by 1 and by itself. 
# The first few primes are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 …
# N is a prime if and only if it is not divisible evenly by any of the numbers from 2 to N−1. Let’s implement this decision as a function.
# In the same program numbers.cpp, add a function bool isPrime(int n)

def isPrime(n):
    if n <= 1:
        return True
 
    for i in range (2 , n):
        if (n % i == 0):
            return False
 
    return True


def main():

    num = int(input("Enter a number: "))

    print(isPrime(num))

main()


