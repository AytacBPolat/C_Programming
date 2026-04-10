#include <stdio.h>

int main(){
	int a[]= {4,2,7,10};
	int *ptr;
	ptr = &(*(a+2));
	printf("%d\n",*ptr);
	ptr = a+2;
	printf("%d\n",*ptr);
	ptr = &(a[2]);
	printf("%d\n",*ptr);
}
