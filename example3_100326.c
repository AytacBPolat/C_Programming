#include <stdio.h>
/*
Sayýnýn strong number olup olmadýðýný bulan program. Strong Number: rakamlarýn faktöriyelinin toplamý kendisine eþit sayýlara strong number denir.
do while kullanýlacak
5 tane deðiþken kullanýlacak
if statement kullanýlmayacak
*/
int main(){
	int num,sum=0,factorial=1,digit,orgnum=0;
	printf("Enter a number : \n");
	scanf("%d",&num);
	orgnum = num;
	do{
		factorial = 1;
		digit = num%10;
		while(digit > 0){
			factorial *= digit;
			digit--;
		}
		sum+=factorial;
		num/=10;
	}
	while(num>0);
	(sum == orgnum)? printf("%d is strong number.",orgnum) : printf("%d is not a strong number.",orgnum);
	
	return 0;
}

