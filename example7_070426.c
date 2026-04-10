#include <stdio.h>
int main(){
	char *ptr[]={"Un Buon Amica", "bambini arrivaro", "nella"};
	printf("%c\n",*(*(ptr+1)+3)); //ptr dizisinin 1.elemanýnýn 3.harfini gösterecek.
	
	int i=0;
	while(i<strlen(*(ptr+2))){
		printf("%c",*(*(ptr+0)+8+i));
		i++;
	}
	printf("\n");
	char *p = *(ptr+2);
	char arr[strlen(p)];
	for(i=0;i<strlen(p);arr[i]=*p,p++,i++);
	printf("%s\n",arr);
	
	return 0;
}
