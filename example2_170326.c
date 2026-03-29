#include <stdio.h>
/*
	1'den N'e kadar olan sayıların toplamını bulan recursive fonksiyon.
*/
int sumnum(int);
int main(){
	int num;
	printf("Enter a number.\n");
	scanf("%d",&num);
	printf("The sum of the numbers is: %d",sumnum(num));
	return 0;
}

int sumnum(int num){
	int sum=0;
	if(num<=0){
		return 0;
	}
	else{
		return(num +sumnum(num-1));
	}
}
