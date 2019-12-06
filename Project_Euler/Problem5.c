/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/
#include<stdio.h>
int main(){
	printf("%lld\n",20*19*9*17*4*1*7*13*1*11*1*1*1*1*1*1*1*1*1*1);
	printf("%lld\n",1*2*3*2*5*1*7*2*3*1*11*1*13*1*1*2*17*1*19*1);
	return 0;
}
