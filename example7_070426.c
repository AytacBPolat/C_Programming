#include <stdio.h>
int main(){
	char *ptr[]={"Un Buon Amica", "bambini arrivaro", "nella"};
	printf("%c\n",*(*(ptr+1)+3)); //ptr dizisinin 1.elemanýnýn 3.harfini gösterecek. b
	
	int i=0;
	while(i<strlen(*(ptr+2))){					//dizinin 2.elemanýnýn harf sayýsý kadar 
		printf("%c",*(*(ptr+0)+8+i));			//dizinin 0.elemanýnýn 8.harfinden itibaren basmaya baþlar.
		i++;									// Amica yazar
	}
	printf("\n");
	char *p = *(ptr+2);							//nella nýn ilk harfini gösterir.
	char arr[strlen(p)];						//arr[5] adýnda bir dizi oluþturur.
	for(i=0;i<strlen(p);arr[i]=*p,p++,i++);
	printf("%s\n",arr);
	
	return 0;
}
