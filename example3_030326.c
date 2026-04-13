#include <stdio.h>
#include <math.h>
/*	Tam sayýdaki rakamlarýn karelerini alan program yazýn.
 	calcpow adýnda bir macro tanýmlayýn.
	 En fazla 2 tane integer deðer tanýmlayýn (num,sum). 
	 Karakter girilene kadar hesaplama yapsýn.
	*/
#define calcpow(num)(pow(num,2))
int main(){
	int num,sum=0;
	printf("Enter a number: \n");
	while(scanf("%d",&num) !=0){
		while(num>0){
			sum += calcpow(num%10);
			num/=10;
		}
		printf("Sum of the square digits for the given number is: %d",sum);
	}
	printf("Enter a number");
	
	return 0;
}
