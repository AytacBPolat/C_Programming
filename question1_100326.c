#include <stdio.h>
/*
Karakter girene kadar girilen bütün çift sayýlarýn toplamýný bulan programý yazýn.
2 variable kullanýlabilir (num,sum)
Sadece 2 for loop kullanýlabilir 1 tanesi complex olacak.
If kullanýlmayacak.
Program 3 saniye bekleyip konsolu temizleyecek #include <unistd.h>
*/
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	int num,sum=0;
	printf("Enter a number.\n");
	for(;scanf("%d",&num)!=0;){
		for(sum=0;num>0;sum+=((num%10)%2==0)?num%10:0,num/=10);
		printf("Sum of the all digits is %d ",sum);
	}
	sleep(3);
	system("cls");
	printf("Enter a number.\n");
	
	
	
	return 0;
}
