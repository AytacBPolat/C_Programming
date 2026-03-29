#include <stdio.h>
/*
N basamaklı bir sayının rakamlarının faktöriyelinin toplamını hesaplayan program yazın.
num değişkeni main içinde tanımlanacak
sadece 4 değişken tanımlanacak
SumFac adında bir fonksiyon oluşturulacak. Bu fonksiyon her sayının faktöriyelinin toplamını döndürecek.
Fonksiyon parametre almayacak.
Sonuç ana fonksiyonda döndürülecek
For kullanılacak
*/
int SumFac();
int num;
int main(){
	printf("Enter a number.\n");
	scanf("%d",&num);
	printf("The sum of the factorial is: %d",SumFac());
	return 0;
}
int SumFac(){
	int dig,fac=1,sum=0;
	for(;num>0;num/=10){
		fac=1;
		for(dig= num%10;dig>0;fac*=dig,dig--);
		sum+=fac;
		}
		return sum;
	}
