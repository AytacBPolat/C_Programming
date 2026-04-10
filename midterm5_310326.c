#include <stdio.h>
int main(){
	char str[][20]={"The Lion King", "Beauty And The Beast", "Jaws", "Coco"};
	char *P;
	char *S = str+3;
	P = &str[0][9];
	int i = 0;
	while(*(P+i)!=NULL){
		*(P+i) = *(S+i);
		i++;
	}
	printf("%s\n",str[0]);
	return 0;
}
