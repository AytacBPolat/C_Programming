#include <stdio.h>
/*
	Dizideki tekrarlý elemanlarý kaldýrýp eþsiz olan elemanlarý býrakacak program.
	RemDump fonksiyonu tanýmlayýn ve bu fonksiyon eþsiz elemanlarý göstersin.
	4 deðiþken kullanýlabilir.
	1 for kullanýlacak.
	Sonuç mainde gösterilsin.
	all adýnda bir dizi tanýmlayýn ve dizi[50] deðerini alsýn
	RemDump fonksiyonu 1 parametre alabilir.
	Main içinde sadece 1 for kullanýlabilir.
*/

void RemDump (int arr[50]);
int el;
int main(){
	int all[50],i;
	printf("Enter the array. \n");
	scanf("%d",&el);
	for(i=0;i<el;i++){
		printf("The %d. element :",(i+1));scanf("%d",&all[i]);
	}
	RemDump(all);

	return 0;
}

void RemDump (int arr[]){
	int unique[el],i,j,k=0;
	for(i=0;i<el;i++) unique[i] = arr[i];
	for (i=0;i<el;i++){
		for(j=0;j<k;j++){
			if(unique[j] == arr[i])	break;
			if(j == k){
				unique[k] = arr[i];
				k++;
			}
	}
	for(i=0;i<k;i++){
			printf("%d ",unique[i] );
		}
	}
} // Bir sonuç vermedi.

