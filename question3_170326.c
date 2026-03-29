#include <stdio.h>
/*
	Verilen binary sayýnýn decimal karþýlýðýný bulan programý yazacak fonksiyon
	binnum deðiþkeni main fonksiyonda tanýmlanacak
	BinToDec fonksiyonu bu iþlemi yapacak.
	Fonksiyon 1 parametre alacak.
	Fonksiyon içinde 2 deðiþken olacak.
	1 tane complex for olacak.
	Sonuç mainde gösterilecek.
*/
int BinToDec (int);
int main(){
	int binnum;
	printf("Enter a number.\n");
	scanf("%d",&binnum);
	printf("The decimal of the given number is : %d",BinToDec(binnum));
	return 0;
}

int BinToDec(int num){
	int dec=0,pow=1;
	for(;num>0;dec+=(num%10)*pow,pow*=2,num/=10);
	return dec;
}
