#include <stdio.h>
/*
	Integer deðerlerini küçükten büyüðe sýralayan program yazýnýz.
	Main içinde nums adýnda bir dizi olacak elemanlarý kullanýcý girecek.
	Sýralanmýþ hali için 1 tane for loop kullanýlacak.
	1 deðiþkenin deðerini gösteren PRN makrosu tanýmlayýn.
	Printf kullanmayýn.
	en fazla 2 parametre kullanýlabilir.
	SortNum fonksiyonu 1 tane parametre alabilir.
	Fonksiyonun içinde maksimum 3 deðiþken olabilir.
	2 tane for loop kullanýlabilir.
	Bir deðer göndermesin.
*/
#define PRN(val)(printf("%d ",val))
void SortNum (int *);
int main(){
	int nums[]={9, 2, 7, 3, 8};
	int i;
	SortNum(nums);
	for(i=0;i<5;i++) {
		PRN(nums[i]);
	}
	return 0;
}
void SortNum (int *p){
	int i, j, temp;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(*(p+i) > *(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}
