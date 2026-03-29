#include <stdio.h>
/*
	2 fonksiyon yazýn. Fonksiyonlarýn birisi verilen stringi alfabetik sýraya dizecek
	diðer string de bütün yazýlanýn tersini yazacak.
	Mainde gösterilsin.
	all[50] tanýmlanacak.
	Ýlk fonksiyon ShowRevStr
	Sadece 1 parametre, 3 deðiþken alsýn.
	2 tane while kullanýlacak.
	Ýkinci fonksiyon SortStrDec
	Sadece 1 parametre, 4 deðiþken alacak
	Sadece for loop 
	Hepsi kullanýcý tanýmlý fonksiyonda oynatýlsýn.
*/

void ShowRevStr (char []);
void SortStrDec (char []);
int main(){
	char txt[50];
	printf("Enter a string. \n");
	scanf("%s",txt);
	ShowRevStr(txt);
	ShowStrDec(txt);
	return 0;
}

void ShowRevStr(char arr[]){
	int cnt=0,i=0;
	printf("Reverse of the string is:  \n");
	while(arr[cnt]!=NULL) cnt++;
	while(i<cnt){
		printf("%c ",arr[cnt-i-1]);
		i++;
	}	
}

void ShowStrDec (char arr[]){
	int i, j;
	char temp;
	printf("\nDescending order of the string is: \n");
	for(i=0;arr[i]!=NULL;i++){
		for(j=0;arr[j]!=NULL;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i=0;arr[i]!=NULL;i++){
				printf("%c ",arr[i]);
			}
}
