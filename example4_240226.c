#include <stdio.h>
int main(){
	int num;
	printf("Enter a number : \n");
	scanf("%d",&num);
	(num%2 == 0) ? printf("The %d is  an even number.",num) : printf("The %d is an odd number.",num);
	
	
	return 0;
}
