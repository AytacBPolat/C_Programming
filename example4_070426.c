#include <stdio.h>
/*
	String dizisinin her elemanýnýn tersini alan program.
	Mainde bir arr dizisi tanýmlayýn 
	Sadece 2 deðiþken tanýmlanabilir 
	1 for kullanabilir.
	Her bir elemanýn tersi oynatýlsýn.
	EachCharRev adýnda bir fonksiyon tanýmlayýn.
	Fonksiyon 1 formal parametre alabilir.
	Fonksiyonda 4 deðiþken olabilir.
	3 for loop kullanýlabilir.
*/
#include <string.h>
void EachCharRev (char (*)[16]);
int main(){
	char arr[][16]={"Franco Baresi","Hugo Sanchez","Ruud Gullit", "Marco VanBasten","Diego Maradona",NULL};
	int i,len=0;
	EachCharRev(arr);
	for(i=0;i<5;i++){
	printf("%s \n",arr[i]);
	}
	return 0;
}
void EachCharRev(char (*p)[16]){
	int i,j,len=0;
	char temp;
	for(i=0;i<5;i++){
		len=strlen(*(p+i));
		char rev[len];
		for(j=0;j<len;j++){
		rev[j]= *(*(p+i)+len-1-j);}
		for(j=0;j<len;j++){
			*(*(p+i)+j) = rev[j];
		}
	}
}

