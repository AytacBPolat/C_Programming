#include <stdio.h>

int main(){
	int v ;
	int *p;
	int a[] = {44, 15, 21, 19, 63, 77};
	p = &(a[3]);
	printf("%d\n", *p);			// a dizisinin 4.elemanýna atama yaptýk. p þu an 19
	p--;
	printf("%d\n", *p);			// a dizisinin 3.elemanýný gösterdi. p þu an 21
	p = a;
	printf("%d\n", *p);			// a dizisinin ilk elemanýna set ettik. p þu an 44
	p=p+4;
	printf("%d\n",*p);			// a dizisinin ilk elemanýndan 4 sonraki elemana set ettik. p þu an 63

	return 0;
}
