#include <stdio.h>
int main(){
	int A[] = {34, 67, 12, 89};
	int *p;
	int *ptr;
	ptr = &(A[2]);
	for(p=A;p!=ptr;p++){
		printf("%d\n",*p);
	}
	printf("---- Yeni Soru ---- \n");
	p = A+1;
	ptr = A;
	if(p<ptr){
		printf("%d\n",*p);
	}
	else{
		printf("%d\n",*ptr);
	}
	
	return 0;
}
