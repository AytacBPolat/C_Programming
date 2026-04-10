#include <stdio.h>
/*
	Verilen string dizisinin tersini alan programý oluþturun.
	Main içinde array adýnda bir string tanýmlayýn.
	Herhangi bir array deðiþkeni olmasýn ve sadece 1 deðiþken kullanýlsýn.
	RevEachStr adýnda bir fonksiyon tanýmlayýn bu tersini alma iþlemini yapsýn.
	Fonksiyon 3 deðiþken alabilir.
	2 for loop kullanýlabilir.
	Strlen kullanýlsýn.

*/
#include <string.h>			//strlen kullanýlsýn dediði için
void RevEachStr (char *[]);
int main(){
	char *arr[]={"Julia","Leeroy","Simon",NULL};
	RevEachStr(arr);
	return 0;
}
void RevEachStr(char *p[]){ //(char **p) þeklinde de tanýmlanabilir
	int i, j;
	for(i=0;*(p+i)!=NULL;i++){
		for(j=strlen(*(p+i))-1;j>=0;j--){
			printf("%c", *(*(p + i) + j));
		}
		printf("\n");
	}
}
