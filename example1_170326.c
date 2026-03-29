#include <stdio.h>
/*
	Sayýnýn faktöriyelini bulan recursive fonksiyonunu yazýn.
*/
int refac(int);
int main(){
	int num;
	printf("Enter a number.\n");
	scanf("%d",&num);
	printf("The factorial of the given number is: %d",refac(num));
	return 0;
}

int refac(int num){
	if (num <=1){
		return 1;
	}
	else {
		return (num*refac(num-1));
	}
}
