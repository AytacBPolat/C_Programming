#include <stdio.h>
#include <string.h>
/*
	Klavyeden yazýlan yazýnýn uzunluðunu bulan program.
	FindLen adýnda bir fonksiyon uzunluðu bulsun.
	Do-while kullanýlacak.
	Fonksiyon 1 parametre ve 1 deðiþken alabilir.
*/

int FindLen(char []);
int main(){
	char txt[50];
	printf("Enter the text. \n");
	scanf("%s",txt);
	printf("The length of %s is : %d \n",txt,FindLen(txt));

	return 0;
}

int FindLen (char arr[]){
	int cnt =0;
	do {
		cnt++;
	}while (arr[cnt] != '\0');
	
	return cnt;
}
