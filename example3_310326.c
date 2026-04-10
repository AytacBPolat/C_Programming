#include <stdio.h>

int main(){
	int x =20;
	int *ptr;
	int **p;
	ptr = &x;		//Ptr x'in adresini gösteriyor.
	p = &ptr;		//P de Ptr'nin tuttuðu adresin deðerini gösteriyor.
	**p = 10;		//P nin deðerini 10 yapýyoruz.
	printf("%d\n", x);		//P nin tuttuðu adresin deðeri 10 olmuþ oldu.
	printf("%d\n",*ptr);
	printf("%d\n",**p);
	return 0;
}

/*
	int a[] = {4, 7, 2, 9};
	int *ptr;
	ptr = &a[2] veya ptr = a+2 veya ptr = &(*(a+2)) ayný ifadeyi verir

*/
