"""


The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

"""


prime_list = [2]
num = 3
while(num<2000000):
    for prime in prime_list:
        if(prime*prime>num):
            prime_list.append(num)
            break
        if(num%prime==0):
            break
    num += 2
print(sum(prime_list))
