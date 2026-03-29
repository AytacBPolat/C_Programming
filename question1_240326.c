#include <stdio.h>
/*
	Küçükten büyüðe sýralama yapan fonksiyon yazýn.
	SortArr fonksiyonu 1 parametre alsýn.
	Body 3 deðiþken alabilir.
	Sadece for loop kullanýlabilir.
	Düzenlenmiþ olan diziyi göstersin.
	Mainde all adýnda bir dizi olsun.
*/

void SortArr(int []);
int main(){
	int all[] = {9,8,1,-4,5,2};
	SortArr(all);
	return 0;
}
void SortArr(int arr[]){
	int i,j,temp;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++){
		printf("%d ", arr[i]);
	}
}
