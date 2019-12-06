/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include<stdio.h>

int isPalindrome(int A){
	int tmp = A, B = 0;
	while(tmp){B=(B*10)+tmp%10; tmp/=10;}
	if(A==B){return 1;}
	return 0;
}

int main(){
	int i = 999, j = 999, result = 1;
	for(i=999;i>=100;i--){
		for(j=999;j>=i;j--){
			if((i*j>result) && isPalindrome(i*j)){result=i*j;}
		}
	}
	printf("%d\n",result);
	return 0;
}
