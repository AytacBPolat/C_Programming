#include <stdio.h>
/*
	Karakteri büyükten küçüðe doðru sýralayan program yazýn.
	Output mainde okunsun.
	mainde str[50] deðiþkeni tanýmlayýn
	main herhangi bir loop içermeyecek.
	SortStr adlý bir fonksiyon tanýmlayýn ve bu fonksiyon sýralama iþlemini yapsýn.
	Fonksiyon 1 parametre alabilir. Fonksiyon içinde 3 deðiþken kullanýlabilir.
	Sadece 2 while kullanýlabilir.
*/
void SortStr (char *);
int main(){
	int str[50];
	printf("Enter the string \n");
	scanf("%s",str);
	SortStr(str);
	printf("The sorted string is: %s",str);
	return 0;
}
void SortStr (char *p){
	int i,j,temp;
	i=0;
	while(*(p+i)!='\0'){
		j=i+1;
		while(*(p+j)!=NULL){
			if(*(p+i) < *(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
			j++;
		}
		i++;
	}
}
