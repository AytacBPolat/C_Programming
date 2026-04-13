#include <stdio.h>
int main(){
	int num[5]={8, 6, 3, 9, 7};
	int *p;
	int **ptr;
	p = num;			printf("%d\n",*p++); 		//8 *p++ ifadesi p nin gösterdiði adresin deðerini bir sonraki adres yapacak.
	ptr = &p;			printf("%d\n",**ptr);		//6
	p = num+3;			printf("%d\n",*--p);		//3
	ptr = p+1;			printf("%d\n",*ptr);		//9
	p = num+1;			printf("%d\n",*++p);		//3
	p = &(*(num+2));	printf("%d\n",*p++);		//3
	p = num; 			printf("%d\n",*++p);		//6
	p = num;			printf("%d\n",++*p);		//9 !!! Burada dizinin ilk elemanýnýn deðerini kalýcý olarak deðiþtiriyoruz.
	p = num;			printf("%d\n",(*p)++);		//9 Dolayýsýyla burada da deðiþtirdiðimiz eleman 9 u basar ancak program devam etseydi 10 çýktýsý görecektik.
	p = num;			printf("Test edelim: %d\n",*p);			//num dizisi artýk {10, 6, 3, 9, 7} oldu.
	return 0;
}
