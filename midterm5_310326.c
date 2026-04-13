#include <stdio.h>
int main(){
	char str[][20]={"The Lion King", "Beauty And The Beast", "Jaws", "Coco"};
	char *P;
	char *S = str+3;						//4.elemanýn ilk harfinin adresini gösteriyor.  C				
	P = &str[0][9];							//1.elemanýn 9.harfinin adresini gösteriyor. K
	int i = 0;
	while(*(P+i)!=NULL){					//P'nin bulunduðu adresten NULL a kadar olan kýsmý S ile tuttuðu deðerden sonraki harflerle deðiþtiriyor.
		*(P+i) = *(S+i);
		i++;
	}
	printf("%s\n",str[0]);
	return 0;
}
