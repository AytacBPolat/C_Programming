#include <stdio.h>
/*
	0'a rastlayana kadar sayýlarý toplayan programý yazýn.
	Numbers dizisini main içinde tanýmlayýn.
	SumArr adýnda bir dizi oluþturun ve bu dizi 1 formal parametre alsýn.
	Fonksiyonun içinde 1 parametre olsun.
	1 tane complex for kullanýlacak.
*/
int SumArr (int *);
int main(){
	int nums[]= {4,6,3,12,0};
	printf("The sum is: %d ",SumArr(nums));
	return 0;
}
int SumArr(int *p){
	int sum;
	for(sum=0;*p!=0;sum=sum+(*p),p++);
	return sum;
}
