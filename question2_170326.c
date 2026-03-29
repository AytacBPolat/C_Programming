#include <stdio.h>
/*
Verilen sayının ilk ve son rakamlarının yerini değiştiren programı yazın.
num değişkenini kullanıcı belirleyecek.
SwapFlDigit fonksiyonu tanımlanacak.
Fonksiyon sadece 1 tane formal parametre alabilir "Func(int)" şeklinde alabilirsiniz diyor.
4 değişken tanımlanacak.
Complex for kullanılacak.
Display işlemini main içinde yapacak.
*/
int SwapFLDigit(int);
int main(){
	int num;
	printf("Enter a number.\n");
	scanf("%d",&num);
	printf("The new number is %d",SwapFLDigit(num));
return 0;
}
int SwapFLDigit(int num){
	int fdig,ldig,midnum=0,pw=1; //1234 ldig=4 , 123 midnum=3*1 	23
	ldig = num%10;
	for(num/=10;num>9;midnum+=(num%10)*pw,pw*=10,num/=10);
	fdig=num;
	return((ldig*pw*10)+ (midnum*10) +fdig);
}
