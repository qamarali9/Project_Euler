"""


By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

"""

def nth_prime(n):
    prime_list = [2]
    i = 3
    count = 1
    while(count<n):
        fl = 1
        for j in prime_list:
            if(j*j>i):
                prime_list.append(i)
                count+=1
                break
            if(i%j==0):
                fl = 0
                break
        i+=2
    return prime_list[-1]

print(nth_prime(10001))
