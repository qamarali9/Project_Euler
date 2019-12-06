/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<stdio.h>

int isPrime(long long int n){
	long long int i = 2;
	for(i=2;i*i<=n;i++){
		if(n%i==0){return 0;}
	}
	return 1;
}

long long int largestPrimeFactor(long long int A){
	long long int i = 2, result = 2;
	for(i=2;i*i<=A;i++){
		if((A%i==0)&&isPrime(i)){
			if(isPrime(A/i)){return A/i;}
			result = i;
		}
	}
	return result;
}

int main(){
	printf("%lld\n",largestPrimeFactor(600851475143));
	return 0;
}
