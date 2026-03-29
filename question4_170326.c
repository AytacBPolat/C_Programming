#include <stdio.h>
/*
	******** 	Þeklini çizdirecek programý yazýn. row deðiþkeni kullanýcý tarafýndan mainde belirlenecek.
	*	  *		Fonksiyon parametre almayacak.
	*    *		Fonksiyon içinde en fazla 2 deðiþken kullanýlacak.
	*   *		3 tane for loop kullanýlabilir.
	*  *		1 tane logic operatör kullanýlabilir.
	* *
	**
	*
*/
void DrawTriangle();
int row;
int main(){
	printf("Enter a row number.");
	scanf("%d",&row);
	DrawTriangle();
	return 0;
}

void DrawTriangle(){
	int i,j;
	for(i=1;i<=row;i++){
		if(i==1 || i == row){
			for(j=1;j<=row-i+1;j++){
				printf("*");
			}
		}
		else{
				printf("*");
				for(j=1;j<=row-i-1;j++){
					printf(" ");
				}
				printf("*");
			}
			printf("\n");
	}
}
