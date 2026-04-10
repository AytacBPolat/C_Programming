#include <stdio.h>
/*
	Stringin uzunluðunu bulan programý yazýn.
	P adýnda bir deðiþken tanýmlayýn ve diziyi göstersin.
	P[] = {"Sandra Bullock", "Betty White", "Jennie lee Curtis"}
	Sadece 4 deðiþken kullanýlabilir.
	Array deðiþken kullanýlamaz.
	Sadece 2 while loop kullanýlabilir.
	Dizinin uzunluðu bilinmiyor.
*/
int main(){
	char *P[] = {"Sandra Bullock", "Betty White", "Jennie lee Curtis",NULL};
	int i, j,len=0;
	while (*(P+i)!=NULL){
		j=0;len=0;
		while(*(*(P+i)+j)!=NULL){
			j++;
			len++;
		}
		printf("The length of the %d. array is %d.\n",i+1,len);
		i++;
	}
	
	return 0;
}
